note
	description: "Summary description for {PIECE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	PIECE


feature
	is_valid_move (board: BOARD; from_code, to_code: STRING): BOOLEAN
		require
			board.is_valid_code (from_code) and board.is_valid_code (to_code)
		deferred
		end
-- English name of the piece
	name: STRING
	color: STRING
	make (player: STRING)
		require
			player_valid: (player.as_upper.is_equal("WHITE") or player.as_upper.is_equal("BLACK")) --and player.count = 5 :(
		do
			color := player.as_upper
		end

invariant
	color.is_equal ("WHITE") or color.is_equal ("BLACK")
end
