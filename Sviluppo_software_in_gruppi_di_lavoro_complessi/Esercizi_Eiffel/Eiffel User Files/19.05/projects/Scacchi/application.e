note
	description: "Scacchi application root class"
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
			b: BOARD
			wk, bk: KING
		do
			create b.make
			create wk.make ("WHITE")
			create bk.make ("BLACK")
			--bk := Void
			print ("%N***********************************************%N")
			b.put ("a5", wk)
			b.put ("h3", bk)
			print (b)
			b.move ("a5", "b6")
			print (b)
		end

end
