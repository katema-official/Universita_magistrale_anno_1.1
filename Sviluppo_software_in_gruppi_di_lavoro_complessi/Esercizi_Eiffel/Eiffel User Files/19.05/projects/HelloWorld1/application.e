note
	description: "HelloWorld1 application root class"
	date: "$Date$"
	revision: "$Revision$"

class
	APPLICATION

inherit
	ARGUMENTS_32

create
	make

feature {NONE} -- Initialization

	clock: CLOCK

	make
			-- Run application.
		do
			--| Add your code here
			print ("Hello Eiffel World!%N")

			--creo un clock

			create clock.make(18, 41)
			print (clock.hours.out + "%N")
			clock.hours := clock.hours + 2
			print(clock.hours.out + "%N")
			print("" + clock.out + "%N")
			--print(clock

		end

end
