note
	description: "Summary description for {ACCOUNT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ACCOUNT

create
	make
feature {NONE} -- Initialization
	make
	-- Initialize empty account.
	do
		balance := 0
		credit_limit := 1000
	ensure
		balance_set: balance = 0
		credit_limit_set: credit_limit = 1000
	end

feature -- Access
	credit_limit: INTEGER -- Credit limit of this account.
	available_amount: INTEGER -- Amount available on this account.
	do
		Result := balance + credit_limit
	end
	balance: INTEGER	-- Balance of this account.
feature -- Element change
	set_credit_limit (limit: INTEGER)-- Set `credit_limit' to `limit'.
		require
			limit >= (0).max (- balance)
		do
			credit_limit := limit
		ensure
			credit_limit_set: credit_limit = limit
		end
	deposit (amount: INTEGER) -- Deposit `amount' in this account.
		require
			amount_non_negative: amount >= 0
		do
			balance := balance + amount
		ensure
			balance_set: balance = old balance + amount
		end
	withdraw (amount: INTEGER)-- Withdraw `amount' from this account.
		require
			positive_amount: amount > 0
			may_withdraw: amount <= available_amount
		do
			balance := balance - amount
		ensure
			balance_set: balance = old balance - amount
		end
feature -- Basic operations
	transfer (amount: INTEGER; other: ACCOUNT) -- Transfer `amount' from this account to`other'
	require
		positive_amount: amount > 0
		may_withdraw: amount <= available_amount
		no_aliasing: other /= Current
	do
		balance := balance - amount
		other.deposit (amount)
	ensure
		withdrawal_made: balance = old balance - amount
		deposit_made: other.balance = old other.balance + amount
		same_credit_limit: credit_limit = old credit_limit
		other_same_credit_limit: other.credit_limit = old other.credit_limit
	end

	merge(other: ACCOUNT)
	require
		niente_debiti: other.balance + Current.balance <= other.credit_limit.max(Current.credit_limit)
		diversi: other /= Current
	do
		set_credit_limit (other.credit_limit.max (Current.credit_limit))
		deposit (other.balance)
		other.set_credit_limit (1000)
	ensure
		new_credit_limit: credit_limit = ((old other.credit_limit).max(old credit_limit))
		new_balance: Current.balance = ((old Current.balance) + old other.balance)
		other_is_0: other.balance = 0 and other.credit_limit = 1000
	end

feature
	log_balance
		local
			log: PLAIN_TEXT_FILE
			i: INTEGER
		do

		if i<3 then
			check -- failure
				False
			create log.make_open_append ("account.log")
			log.put_string ("Balance is: " + balance.out +"%N") -- The next operation fails
		end
		rescue
			i:=i+1

				print(i.out)
				retry
			end
		end

invariant
	credit_limit_not_negative: credit_limit > 0
	balance_not_below_credit: balance >= - credit_limit
	we_love_monga: available_amount = balance + credit_limit
end

