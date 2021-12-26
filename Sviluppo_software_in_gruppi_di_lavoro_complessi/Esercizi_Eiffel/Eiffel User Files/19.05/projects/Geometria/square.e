note
	description: "Summary description for {SQUARE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SQUARE

inherit
	RECTANGLE
	  export {NONE}   -- "guarda che queste feature ereditate le voglio private"
	      make
		select
			is_equal	-- Se ho due feature ereditate con lo stesso nome dovrò select sul metodo che voglio utilizzare senza binding e rinominare gli altri in un altro modo.
		end


    REGULAR_POLYGON
	   rename
		is_equal as is_equal_as_rp
	   export {NONE}
			is_equal_as_rp
	   end


create
	make_with_edge

feature
	make_with_edge (width: REAL)
		do
			make (width, width)
	end


end
