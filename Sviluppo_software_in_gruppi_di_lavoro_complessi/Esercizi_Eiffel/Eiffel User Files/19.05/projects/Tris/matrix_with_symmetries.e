note
	description: "Summary description for {MATRIX_WITH_SYMMETRIES}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
  MATRIX_WITH_SYMMETRIES [G]
inherit
  ARRAY2 [G]
  redefine
  	is_equal
  	end
create
  make, make_filled

feature

	rotate90
  -- Rotate matrix items 90 degrees clockwise
	local
    	tmp: MATRIX_WITH_SYMMETRIES[G]
 	do
    	create tmp.make_filled (at (lower), height, width)
    	tmp.copy(Current)
    	make_filled (tmp.at (tmp.lower), width, height)
    	across 1 |..| height as r loop
			across 1 |..| width as c loop
			put (tmp.item (tmp.height + 1 - c.item,  r.item), r.item, c.item)
			end
		end
  	ensure
    	width = old height and height = old width
    	across 1 |..| width as r all
    		(old current.twin).item(1, r.item) = current.item(r.item, 3)
    	end
	end


	flip_columns
			-- Flip/exchange columns: the first becomes the ©’ last and so on
	local
		tmp: G
	do
	  across 1 |..| height as r loop
	  	across 1 |..| (width // 2) as c loop
	    	tmp := item(r.item, c.item)
	    	put(item(r.item, width - c.item + 1), r.item, c.item)
			put(tmp, r.item, width - c.item + 1)
		end
	  end
	  ensure
	    width = old width and height = old height
  end

  is_equal(other:MATRIX_WITH_SYMMETRIES[G]):BOOLEAN
  	local
  		tmp2: MATRIX_WITH_SYMMETRIES[G]

  	do
  		print("giacomo")
  		tmp2:= other.twin
  		tmp2.rotate90
  		tmp2.rotate90
  		result := precursor(other) or precursor(tmp2)
  	ensure then
  		--ricordati che tutte le ensure sono sbagliate, è corretto il controllo manuale

  		current.is_equal (old current) --current ~ old current LA TILDE CHIAMA IS_EQUAL
		--result=((old current) ~ other) or ( current ~((other.twin).rotate90.rotate90))


  	end



end
