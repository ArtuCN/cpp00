/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:58:56 by aconti            #+#    #+#             */
/*   Updated: 2024/07/01 16:59:36 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;

int Account::_totalAmount = 0;

int Account::_totalNbDeposits = 0;

int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	Account::_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	Account::_nbDeposits = 0;
	Account::_nbWithdrawals = 0;
	Account::_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	// Account::_displayTimestamp();
}

Account::~Account(void)
{
	// _displayTimestamp();
	std::cout << "index:" << _accountIndex << "; amount: " << _amount << "; closed" << std::endl;
    _nbAccounts--;
    _totalAmount -= _amount;

};

void Account::_displayTimestamp( void )
{
	std::cout << "\033[34m[19920104_091532]\033[0m\t";
}

void Account::makeDeposit(int deposit)
{
	Account::_amount += deposit;
	Account::_totalAmount += deposit;
	Account::_nbDeposits++;
	Account::_totalNbDeposits++;
	// Account::_displayTimestamp();
}

void Account:: displayStatus(void) const
{
	// Account::_displayTimestamp();
	std::cout << "index: " << Account::_accountIndex << "; amount: " << Account::_amount << "; deposits:" << Account::_nbDeposits << "; withdrawals: " << Account::_nbWithdrawals << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	if (Account::_amount < withdrawal)
	{
		// Account::_displayTimestamp();
		std::cout << "index: " << Account::_accountIndex << "; p_amount: " << Account::_amount << "; \033[31mwithdrawal refused\033[0m" << std::endl;
		return false;
	}
	else
	{
		Account::_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		Account::_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		// Account::_displayTimestamp();
		return true;
	}
}

void Account::displayAccountsInfos(void)
{
	// Account::_displayTimestamp();
	std::cout << "accounts: " << Account::_nbAccounts << "; total: " << Account::_totalAmount << "; deposits: " << Account::_totalNbDeposits << "; withdrawals: " << Account::_totalNbWithdrawals << std::endl;
}