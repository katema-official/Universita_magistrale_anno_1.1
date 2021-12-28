note
	description: "Summary description for {SAVING_ACCOUNT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SAVING_ACCOUNT

inherit
	ACCOUNT
		export {NONE}
			credit_limit,
			set_credit_limit,
			make
		end

create
	make_sa

feature {NONE}
	make_sa
	require
		true
	do
		balance := 0
		credit_limit := 0
	ensure
		balance_set: balance = 0
		credit_limit_set: credit_limit = 0
	end

invariant
	true

end
