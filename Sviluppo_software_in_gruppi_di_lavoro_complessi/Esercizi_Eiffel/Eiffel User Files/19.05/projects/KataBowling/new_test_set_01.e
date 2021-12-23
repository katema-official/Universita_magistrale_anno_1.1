note
	description: "[
		Eiffel tests that can be executed by testing tool.
	]"
	author: "EiffelStudio test wizard"
	date: "$Date$"
	revision: "$Revision$"
	testing: "type/manual"

class
	NEW_TEST_SET_01

inherit
	EQA_TEST_SET
	redefine
		on_prepare
	end

feature {NONE}
	g: GAME

	on_prepare
		do
			Precursor
			create g
		end

	roll_many(n, pins: INTEGER)
		require
			positive_n: n >= 0
			valid_pins: 0 <= pins and pins <= 10
		local
			i: INTEGER
		do
			from
				i := 0
			until
				i = n
			loop
				g.roll(pins)
				i := i + 1
			end
		--ensure
		--	g.score >= old g.score
		end

	roll_spare
		do
			g.roll (5)
			g.roll (5)
		end

feature	--test routines

	--mi serve per debuggare ok?
	remainder(n: INTEGER): BOOLEAN
		require
			stupid_condition: 1 > 0
			rem_is_0: n.integer_remainder (2) = 0
		do
			print("the remainder of " + n.out + " is " + n.integer_remainder (2).out + "%N")
			Result := True
		end

	test_gutter_game
		do
			g.set_current_roll_to_zero
			roll_many(20, 0)
			assert("Gutter game has non zero score " + g.score.out, g.score=0)
		end

	test_all_ones
		do
			g.set_current_roll_to_zero
			roll_many(20, 1)
			assert("Gutter game has NOT score equal to 20 " + g.score.out, g.score=20)
		end

	test_one_spare
		do
			g.set_current_roll_to_zero
			roll_spare
			g.roll (3)
			roll_many(17, 0)
			assert("Wrong spare bonus. Total score: " + g.score.out, g.score = 16)
		end

	test_one_strike
		do
			g.set_current_roll_to_zero
			g.roll (10) --strike
			roll_spare
			g.roll (3)
			g.roll (4)
			roll_many(14, 0)
			--assert("FANCULO " + g.score.out, g.score >10)
		end

end


