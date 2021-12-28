note
	description: "BANK application root class"
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
			a: ACCOUNT
			b: ACCOUNT
			a2: ACCOUNT
			X: INTEGER
			W: INTEGER
			Y: INTEGER
			Z: INTEGER
		do
			--| Add your code here
			print ("Hello Eiffel World!%N")
			create a.make
			create b.make

		--	a.transfer(-1, b)		--non viene eseguita perché i transfer possono essere fatti solo con valori positivi
			a.transfer(100, b)		--questa è ok
		--	a.transfer(100, a)		--no perché non posso trasferire soldi a me stesso (= Current)
			a.transfer(100, a.twin)	--sì perché Twin fa una copia dell'oggetto, dove però la copia ha lo stesso stato dell'oggett
									--di partenza, ma non lo stesso oggetto
			b.transfer(b.balance, a)	--funzica se b.balance è positivo, b/=a


			X := 100
			W := 40
			Y := 300
			Z := 50
			create a2.make
			a2.set_credit_limit (X)	--X > 0. La precondizione di set_credit_limit richiede che X sia maggiore uguale
									--del massimo tra 0 e -balance. Siccome questa è la prima operazione dopo il make
									--(l'apertura del conto praticamente) balance è 0, quindi vogliamo che X sia >=0.
									--Tuttavia, l'invariante di ACCOUNT chiede che il credit_limit sia >0. Quindi, con X=0,
									--la precondizione della feature passa, ma non il check dell'invariante. Quindi, per
									--far sì che l'operazione non fallisca e quindi non si violi il contratto, X > 0
			a2.withdraw (W)			--le precondizioni di withdraw ci chiedono che W>0 e W <= balance + credit_limit.
									--Una prima condizione è che quindi W > 0. Inoltre, siccome abbiamo appena creato l'account
									--e abbiamo solo impostato il credit_limit, il balance è 0. Quindi deve anche essere vero
									--che W <= X. Quindi abbiamo che 0 < W <= X
			a2.set_credit_limit (Y)	--Y >= (0).max (- balance). In questo caso, balance = -W, dato che c'è stato un prelievo di una
									--quantità > di balance (che era 0). Quindi balance è negativo (Siamo andati in credito).
									--Inoltre, sappiamo che W > 0. Pertanto, -W < 0. Quindi stiamo chiedendo che Y >= (0).max(-(-W)), in
									--quanto balance = -W. Essendo W > 0, abbiamo che Y >= W.
			a2.withdraw (Z)			--Di nuovo, le precondizioni sono che Z>0 e Z <= balance + credit_limit, ovvero Z <= -W + Y.
									--Tuttavia, sostituendo, otteniamo che 0 < Z <= -W + Y. Ma, dall'operazione di prima, Y >= W.
									--Quindi, nel caso in cui Y = W, avremmo che 0 < Z <= 0, che non lascia spazio ad alcun valore
									--intero ammissibile. Pertanto è necessaria la condizione Y > W, affinché questa operazione di
									--prelievo sia eseguibile.
									--Il valore di balance alla fine sarà, se tutto è andato bene, -(W+Z)

			a.merge (b)

		end

end
