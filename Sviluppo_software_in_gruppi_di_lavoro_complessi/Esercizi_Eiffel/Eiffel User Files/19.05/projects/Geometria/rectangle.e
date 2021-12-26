note
	description: "Summary description for {RECTANGLE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	RECTANGLE

inherit
	POLYGON
		redefine
			is_equal
		end

create
	make

feature
	make (height, width: REAL)
		do
			x := width
			y := height
			n_vertices := 4
		end

	area: REAL
		do
			Result := x * y
		ensure then
			Result = x * y
		end

	perimeter: REAL
		do
			Result := 2 * (x + y)
		ensure then
			Result = 2 * (x + y)
		end

	rotate (angle: REAL)
		require
			angle.floor = angle.ceiling
		    -- angle.abs.integer_remainder(90) = 0 E' un reale, non va
		    angle.abs.rounded.integer_remainder(90) = 0

		local
			a, tmp: REAL
		do
			a := angle.abs
				from
					a := angle.abs
				until
					a <= 0
				loop
					a := a - 90.
					tmp := x
					x := y
					y := tmp
				end
		ensure
			same: x = old x implies y = old y
			swapped: x /= old x implies y /= old y
		end

	max_edge: REAL
		do
			Result := x.max (y)
		end

	min_edge: REAL
		do
			Result := x.min (y)
		end

	is_equal (other: like Current): BOOLEAN
		-- rectangles are equals if they have the same edges,
		-- possibly after a rotation of 90 degrees
		do
			Result := min_edge = other.min_edge and max_edge = other.max_edge
		end

feature {NONE}
	x, y: REAL

invariant
	x > 0.0
	y > 0.0
end
