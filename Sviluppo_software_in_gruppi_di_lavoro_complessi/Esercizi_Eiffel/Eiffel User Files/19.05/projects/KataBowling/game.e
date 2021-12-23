note
	description: "Summary description for {GAME}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	GAME

inherit
	ANY
	redefine
		default_create
	end

feature

	roll(pins: INTEGER)
		require
			valid_pins: 0 <= pins and pins <= 10
		do
			rolls[current_roll] := pins
			print("Pins: " + pins.out + "%N")
			print("Current roll: " + current_roll.out + "%N")
			if rolls.valid_index(current_roll + 1) then
				current_roll := current_roll + 1
			end
		--ensure
		--	score >= old score
		end

	score: INTEGER
		local
			i, frame: INTEGER
		do
			from
				i := 0
				frame := 0
			until
				frame = 10
			loop
				--print("i value is " + i.out + "%N")
				if rolls[i] = 10 then
					--print("It's a strike! And i is " + i.out + "%N")
					Result := Result + 10 + rolls[i+1] + rolls[i+2]
					i := i + 1
					print("i is " + i.out + "%N")
				elseif is_spare(i) then
					--print("It's a spare! And i is " + i.out + "%N")
					Result := Result + 10 + rolls[i+2]
					i := i + 2
					print("i is " + i.out + "%N")
				else
					--print("It's nothing! And i is " + i.out + "%N")
					Result := Result + rolls[i] + rolls[i+1]
					i := i + 2
					print("i is " + i.out + "%N")
				end
				frame := frame + 1
			end
		end

	set_current_roll_to_zero
		do
			current_roll := 0
		end


feature {NONE}
	rolls: ARRAY [INTEGER]
	current_roll: INTEGER

	default_create
		do
			create rolls.make_filled(0, 0, 20)
			current_roll := 0
		ensure then
			rolls.count = 21
			current_roll = 0
		end

	is_spare(ii: INTEGER): BOOLEAN
		require
			--False
			--array_right_dimension: rolls.count <= 21
			valid_index: rolls.valid_index (ii)
			even_index: ii.integer_remainder (2) = 0
		do
			--if ii.integer_remainder (2) = 1 then
			--	print("What?")
			--end
			--print("i is " + ii.out + ", and remainder 2 is " + (ii.integer_remainder (2)).out + "%N")
			print("in is spare%N")
			Result := (rolls[ii] + rolls[ii+1]) = 10
		end

invariant	--EIFFEL NON CHIAMA LA PRECONDIZIONE DI SCORE QUANDO LO USA, E NEMMENO LE PRECONDIZIONI E POSTCONDIZIONI DELLE FEATURE CHIAMATE DA SCORE (COME is_spare)
	valid_score: 0 <= score and score <= 300
	valid_current: rolls.valid_index(current_roll)
	valid_rolls: across rolls as r all 0<=r.item and r.item <= 10 end

end
