note
	description: "[
		Eiffel tests that can be executed by testing tool.
	]"
	author: "EiffelStudio test wizard"
	date: "$Date$"
	revision: "$Revision$"
	testing: "type/manual"

class
	NEW_TEST_SET

inherit
	EQA_TEST_SET
		redefine
			on_prepare
		end

feature {NONE} -- Events
	on_prepare
-- <Precursor>
		do
			create b.make(10)
		end

	b: RING_BUFFER [INTEGER]

feature -- Test routines
	test_buffer
		do
				assert("Initial capacity", b.capacity = 10)
				assert("Initial count", b.count = 0)
			b.extend (5)
			b.extend (8)
				assert("Capacity", b.capacity = 10)
				assert("Count", b.count = 2)
				assert("Item", b.item = 5)
			b.remove
				assert("Capacity after remove", b.capacity= 10)
				assert("Count after remove", b.count = 1)
				assert("Item after remove", b.item = 8)
			b.remove
				assert("Capacity after remove 2",b.capacity = 10)
				assert("Count after remove 2", b.count = 0)
			print("Ziogiak 1%N")
		end

	test_queries
		do
			assert("Empty", b.is_empty)
			assert("Not full", not b.is_full)

			print("Ziogiak 1.1%N")
			across 1 |..| 10 as i loop b.extend (i.item) end
			print("Ziogiak 1.2%N")

			assert("Not Empty", not b.is_empty)
			assert("Full", b.is_full)
			print("Ziogiak 1.5%N")
			b.remove
			assert("Not Empty", not b.is_empty)
			assert("Not Full", not b.is_full)
			print("Ziogiak 2%N")
	end

	test_wipe_out
		do
		--	b.extend (-1)
			b.extend (-2)
			assert("Not Empty", not b.is_empty)
			b.wipe_out
			assert("Empty", b.is_empty)
			print("Ziogiak 3%N")
		end

	test_char
	local
		bs: RING_BUFFER[CHARACTER]
		do
			create bs.make (3)
			bs.extend ('M')
			assert("Count", bs.count = 1)
		end
end
