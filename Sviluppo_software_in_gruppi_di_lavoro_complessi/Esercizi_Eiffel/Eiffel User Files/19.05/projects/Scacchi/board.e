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

	move (fromw, tow: STRING)
		require
			ok_from: not is_empty (fromw)
			ok_to: is_empty (tow)
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





end
