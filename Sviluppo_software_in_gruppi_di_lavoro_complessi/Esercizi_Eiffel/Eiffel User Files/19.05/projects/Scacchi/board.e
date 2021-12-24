note
	description: "Summary description for {BOARD}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BOARD

inherit
	ANY
	redefine
		out
	end

create
	make

feature {NONE} -- Initialization
	matrix: ARRAY2 [SQUARE]

	make -- Initialization for `Current'.
		local
			empty: SQUARE
		do
			create empty
			create matrix.make_filled (empty, 8, 8)		--se fosse solo questo: ne modifico uno, li modifico tutti.
			across matrix.lower |..| matrix.height as r loop
				across matrix.lower |..| matrix.width as c loop
					matrix [r.item, c.item] := empty.twin	--così invece ogni casella è un oggetto square diversa.
				end
			end
		end

	to_row_col (code: STRING): TUPLE [r: INTEGER; c:INTEGER]
		require
			is_valid_code (code)
		local
			r, c: INTEGER
		do
			r := code.at (2).difference ('1') + 1
			c := code.at (1).difference ('a') + 1
			Result := [r, c]
		end

	is_available (pos: TUPLE [r, c: INTEGER]): BOOLEAN
		do
			Result := not matrix [pos.r, pos.c].is_occupied
		end

feature
	is_empty (code: STRING): BOOLEAN
		local
			pos: TUPLE [r: INTEGER; c: INTEGER]
		do
			pos := to_row_col (code)
			Result := is_available (pos)
		end

	is_valid_code (code: STRING): BOOLEAN
		local
			r, c: INTEGER
		do
			if not (code.count = 2 and code.at (1).is_alpha and code.at (2).is_digit) then
				Result := False
			else
				r := code.at (2).difference ('1') + 1
				c := code.at (1).difference ('a') + 1
				Result := r >= matrix.lower and r <= matrix.height and c >= matrix.lower and c <= matrix.width
			end
		end

	put (where: STRING; p: PIECE)
		require
			ok_where: is_valid_code(where)		--lo metto in una casella valida
			--is_empty: is_empty(where)			--la casella deve essere vuota
		local
			pos: TUPLE [r: INTEGER; c: INTEGER]
		do
			pos := to_row_col (where)
			matrix [pos.r, pos.c].set_presence (p)
		ensure
			get(where) = p
			--something_is_here: not is_empty(where)
		end

	get (where: STRING): detachable PIECE
		require	--devo prendere il pezzo da un posto valido
			ok_where: is_valid_code(where)
		local
			pos: TUPLE [r: INTEGER; c: INTEGER]
		do
			pos := to_row_col (where)
			Result := matrix [pos.r, pos.c].get_presence
		ensure
			if_void: is_empty(where) implies Result = Void
			else_void: not is_empty(where) implies attached Result --Result /= Void
		end

	remove (where: STRING)
		require
			ok_where: is_valid_code(where)
			--not_empty: not is_empty(where)
		local
			pos: TUPLE [r: INTEGER; c: INTEGER]
		do
			pos := to_row_col (where)
			matrix [pos.r, pos.c].set_presence (Void)
		ensure
			something_is_not_here: is_empty(where)
		end

	is_valid_move_not_null(fromw, tow: STRING): BOOLEAN	--consiglio di Davide: le precondizioni devono essere pubbliche, le
														--postcondizioni possono essere private
		local
			p: detachable PIECE
		do
			p := get(fromw)
			if p /= Void then
				Result := p.is_valid_move (CuRREnt, fromw, tow)		--consiglio di Mattia: Eiffel è case insensitive
			else
				Result := False
			end
		end

	move (fromw, tow: STRING)
		require
			valids: is_valid_code(fromw) and is_valid_code(tow)
			ok_from: not is_empty (fromw)
			ok_to: is_empty (tow)
			move_is_acceptable: is_valid_move_not_null (fromw, tow)
			--andava anche bene:
			--move_is_acceptable: attached get (fromw) as o implies o.is_valid_move (Current, from, tow)
			--infatti attach è una chiamata a un metodo boleano: attached get (fromw) = get(fromw) è diverso da Void?
			--se sì, chiama il risultato o e vedi se è una mossa valida
			--"hai detto esatamente bene" cit. Lorenzo
		do
			if attached get (fromw) as p then
			remove (fromw)
			put (tow, p)
		end
		ensure
			ok_from: is_empty (fromw)
			ok_to: not is_empty (tow)
		end

	out: STRING
		local
			cname: CHARACTER
			row: INTEGER
		do
			Result := ""
			across matrix.lower |..| matrix.height as r loop
				row := (matrix.height + matrix.lower) - r.item
				Result := Result + row.out + " "
				across matrix.lower |..| matrix.width as c loop
					Result := Result + matrix [row, c.item].out + " "
				end
				Result := Result + "%N"
			end
		Result := Result + " "
		across matrix.lower |..| matrix.width as c loop
			cname := 'a'
			cname := cname.plus (c.item - matrix.lower)
			Result := Result + " "
			Result.append_character (cname)
		end
		Result := Result + "%N"
	end

	check_number_of_kings: BOOLEAN
		local
			number_of_kings: INTEGER
			row: INTEGER
			control: KING

			--la soluzione simil-professore è quella commentata
			--p: detachable PIECE
		do
			create control.make("WHITE")
			across matrix.lower |..| matrix.height as r loop
				row := (matrix.height + matrix.lower) - r.item
				across matrix.lower |..| matrix.width as c loop
					--p := matrix[row, c.item].get_presence
					--if p /= Void then
					--	if p.name.is_equal ("KING") then
					--		print("VA")
					--	end
					--end

					if (attached matrix[row, c.item].get_presence as o implies o.same_type(control)) and matrix[row, c.item].get_presence /= Void then
						number_of_kings := number_of_kings + 1
					end
				end
			end
			print("Number of kings = " + number_of_kings.out + "%N")
			if number_of_kings <= 2 then
				Result := True
			end
		end


invariant
	check_number_of_kings
	--se mettessimo come invariante che i re devono essere sempre 2, avremmo come problemi che:
	--1) durante la fase di inizializzazione, il numero di re sarà temporaneamente 0 o 1. In quel caso,
	--l'invariant check fallisce.
	--2) In una implementazione completa, ci potrebbero essere problemi anche in fase di fine partita.
	--Se la partita termina quando si verifica uno scacco matto, allora l'invariante andrebbe bene.
	--Se invece la partita termina quando un re viene mangiato dall'altro giocatore, potremmo avere una situazione
	--di inconsistenza alla fine, perché i re non saranno più 2 ma 1.

end
