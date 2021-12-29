note
   description: "[
		FIFO queue implemented as a {RING_BUFFER} of
	 elements of type {G}.

		The ring buffer uses two indexes for the
	first element and the
		next free slot of the buffer. The "Always
	keep one slot open"
		technique is used to distinguish between
	empty and full buffers.
	]"

class
	RING_BUFFER [G]

create
	make

feature {NONE} -- Initialization

	make (n: INTEGER)
-- Initialize empty buffer with capacity `n'.

	note
		status: creator
	require
		n_positive: n > 0
	do
		create data.make_empty
		data.grow (n + 1) -- one slot more
		data.trim
		start := 1
		free := 1
	ensure
		empty_buffer: is_empty
		capacity: capacity = n
	end

feature -- Access

	item: G
-- Current item of buffer.
		require
			not is_empty
		do
			Result := data [start]
		ensure
			Result = data [start]
		end

	model: BOUNDED_QUEUE[G]
		 

	count: INTEGER
	-- Number of items in buffer.
		do
			if free >= start then
				Result := free - start
			else
				Result := data.count - start + free
			end
		end

		ensure
			free >= start implies Result = free - start
			free <  start implies Result = data.count - start + free
			Result >= 0
			Result <= Current.capacity
			free = old free
			start = old start
		end

	capacity: INTEGER
	-- Maximum capacity of buffer.
		do
			Result := data.count - 1
		ensure
			Result = data.count - 1
		end

feature -- Status report

	is_empty: BOOLEAN
		-- Is buffer empty?
		do
			Result := (start = free)
		ensure
			Result = (Current.count = 0)
		--	Result = true implies Current.count = 0
		--	Result = false implies Current.count > 0
		end

	is_full: BOOLEAN
		-- Is buffer full?
		do
			if start = 1 then
				Result := (free = data.count)
			else
				Result := (free = start - 1)
			end
		ensure
			Result = (Current.capacity = Current.count)
		end

feature -- Element change

	extend (a_value: G)
	-- Add `a_value' to end of buffer.
		require
			not is_full
		do
			data [free] := a_value
			if free = data.count then
				free := 1
			else
				free := free + 1
			end
		ensure
			old free = data.count implies free = 1
			old free /= data.count implies free = old free + 1
			count = old count + 1
			data [old free] = a_value
		end

	remove
	-- Remove current item from buffer.
		require
			not is_empty
		do
			if start = data.count then
				start := 1
			else
				start := start + 1
			end
		ensure
			count = old count - 1
			old start = data.count implies start = 1
			old start /= data.count implies start = old start + 1
		end

	wipe_out
	-- Remove all elements from buffer.
		do
			start := free
		ensure
			is_empty
		end

feature {NONE} -- Implementation
	data: ARRAY [G]
	-- Array used to store data.
	start: INTEGER
	-- Index of first element.
	free: INTEGER
	-- Index of next free position.

invariant
data_not_void: data /= Void
capacity > 0
count >= 0 and count < capacity
start > 0 and start < capacity
--data.valid_index (start)
--data.valid_index (free)
free > 0 and free < capacity
is_empty /= is_full

end
