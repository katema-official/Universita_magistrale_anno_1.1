note
	description: "Geometria application root class"
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
			s: SQUARE
			s1: SQUARE
			s2: SQUARE
			s3: SQUARE
			s4: SQUARE
			s5: SQUARE
			s6: SQUARE
			s7: SQUARE
			s8: SQUARE
			s9: SQUARE
			tyler: TILER
		do
			--create s.make(3.0, 5.0) Non funzionerà in quanto make (metodo ereditato dalla classe RECTANGLE non è definito ESPLICITAMENTE come costruttore, bensì è specificato un nuovo costruttore in SQUARE (create_with_edge()))
			create tyler.make
			create s.make_with_edge(3.0)
			create s1.make_with_edge(3.0)
			create s2.make_with_edge(3.0)
			create s3.make_with_edge(3.0)
			tyler.add(s)
			tyler.add(s1)
			tyler.add(s2)
			tyler.add(s3)
			s4 := tyler.tiled_square
			print("Perimetro con costruttore di square: " + s.perimeter.out + "%N")
			--s.make(3.0, 5.0)
			print("Perimetro dopo chiamata di make ereditato: " + s.perimeter.out + "%N")
			print ("Hello Eiffel World!%N")
		end

end
