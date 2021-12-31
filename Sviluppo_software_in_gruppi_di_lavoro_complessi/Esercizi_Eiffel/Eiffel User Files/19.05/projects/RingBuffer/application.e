note
	description: "RingBuffer application root class"
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
			rb: RING_BUFFER[INTEGER]
			test: NEW_TEST_SET
		do
			print ("Hello Eiffel World!%N")
			create rb.make(5)
			rb.extend(1)
			rb.extend(4)
			rb.remove
			print(rb.item)

			create test
			test.test_buffer
			test.test_queries
			test.test_wipe_out
			test.test_char

		--punto 5: è un casino perché bisognerebbe ricordarsi l'intera storia della struttura dati, cioè gli inserimenti e le
		--deletions. In generale questa è una proprietà sicuramente desiderabile ma difficile da ottenere nel caso generale.
		--Una semplificazione potrebbe essere tenere di conto non di tutti gli elementi inseriti prima di quello corrente, ma solo
		--di quanti sono stati inseriti prima di quello corrente. Chiaramente non sarebbe efficace come verificare tutti gli elementi
		--precedenti, ma insomma.
		--Davde propone un metodo is_last che huasfbuweakjsbchugwheiafkbvgrshdbvjesjfdhbvjhscm sghvdfbcjv ehfdjbc esc rhj finché is_empty non è
		--true. uugfhksdcnbjrhwkshdbv vbdhwjenbhjv bvj,b am kcnaewbhj    fwehvb rjvh kbdhc vkdhfbjwv questo si potrebbe fare.

		end

end
