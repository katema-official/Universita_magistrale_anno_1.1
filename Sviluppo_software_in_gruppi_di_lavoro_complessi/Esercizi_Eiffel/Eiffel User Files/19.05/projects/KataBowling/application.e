 note
	description: "KataBowling application root class"
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
			-- Run application.
		local
			test: NEW_TEST_SET_01
		do
			--| Add your code here
			print ("Hello Eiffel World!%N")
			create test
			test.test_gutter_game
			test.test_all_ones
			test.test_one_spare
			test.test_one_strike
			--print(test.remainder(3))
		end

end
