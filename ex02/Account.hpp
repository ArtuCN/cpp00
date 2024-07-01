/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:55:58 by aconti            #+#    #+#             */
/*   Updated: 2024/07/01 16:08:25 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACCOUNT_HPP
#define	ACCOUNT_HPP

#include <string>
#include <iostream>

class Account 
{
	public:
		typedef Account		t;
		Account(int initial_deposit);
		~Account(void);

		static void displayAccountsInfos(void);
		void displayStatus(void) const;
		void makeDeposit(int deposit);
		bool makeWithdrawal(int withdrawal);

	private:
		static int _nbAccounts;
		static int _totalAmount;
		static int _totalNbDeposits;
		static int _totalNbWithdrawals;

		int _accountIndex;
		int _amount;
		int _nbDeposits;
		int _nbWithdrawals;

		static void _displayTimestamp(void);
};

#endif