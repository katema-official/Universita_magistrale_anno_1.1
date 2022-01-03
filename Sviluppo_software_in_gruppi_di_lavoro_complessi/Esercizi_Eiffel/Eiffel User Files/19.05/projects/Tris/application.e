note
	description: "Tris application root class"
	date: "$Date$"
	revision: "$Revision$"

class
	APPLICATION

inherit
	ARGUMENTS_32

create
	make

feature {NONE} -- Initialization

	make
		local
			a,b,p,t: TICTACTOE
			i: INTEGER
		do
			create t.make
			create p.make
			create a.make
			create b.make

			a.play (1,1)
			b.play (3,3)
			--print(a.is_equal (b).out)
			--print((a~b).out)
      		print ("%NNuova partita%N")
      		from
				i := 1
			until
        		t.is_finished
			loop
				t.play (i.integer_quotient (3) + 1, i.integer_remainder (3) + 1)
        		p.play (i.integer_quotient (3) + 1, i.integer_remainder (3) + 1)
				print ("%N" + t.out + "%N")
				i := i + 1

		 	end
		 	--print("pino:" + p.is_equal(t).out)
      print ("%NFine partita%N")
    end
end
