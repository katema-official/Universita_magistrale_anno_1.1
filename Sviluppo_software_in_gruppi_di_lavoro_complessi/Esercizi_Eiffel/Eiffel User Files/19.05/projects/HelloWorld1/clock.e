note
	description: "Summary description for {CLOCK}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CLOCK

inherit
	ANY
	redefine
		out
	end

create
	make

feature
	hours: INTEGER assign set_hours
	minutes: INTEGER assign set_minutes

	make(hh, mm: INTEGER)
		require
			0 <= hh and hh < 24
			0 <= mm and mm < 60
		do
			hours := hh
			minutes := mm
		ensure
			hours = hh
			minutes = mm
		end

	set_hours(h_value: INTEGER)
		require
			0 <= h_value and h_value < 24
		do
			hours := h_value
		ensure
			hours = h_value
		end

	set_minutes(m_value: INTEGER)
		require
			0 <= m_value and m_value < 24
		do
			minutes := m_value
		ensure
			minutes = m_value
		end

	increase_hours
		do
			if hours = 23 then
				set_hours(0)
			else
				set_hours(hours + 1)
			end
		ensure
			normal_h: old hours < 23 implies hours = old hours + 1
			change_day: old hours = 23 implies hours = 0
		end

	increase_minutes
		do
			if minutes = 59 then
				set_minutes(0)
				increase_hours
			else
				set_minutes(minutes + 1)
			end
		ensure
			normal_m: old minutes < 59 implies minutes = old minutes + 1
			change_hour: old minutes = 59 implies minutes = 0 and hours /= old hours
		end

	out: STRING
		local
			hh, mm: STRING
		do
			--hours.out: siccome hours è un intero, con .out ne prendo la rappresentazione come stringa.
			--con .twin ne faccio una copia
			hh := hours.out.twin
			if hh.count < 2 then
				hh.prepend ("0")
			end
			mm := minutes.out.twin
			if mm.count < 2 then
				mm.prepend ("0")
			end
			Result := hh + ":" + mm
		ensure then
			Result.count = 5
		end



invariant
	valid_hours: 0 <= hours and hours < 24
	valid_mins: 0 <= minutes and minutes < 60
end







