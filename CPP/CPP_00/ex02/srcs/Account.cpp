/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 17:04:31 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/12/30 17:04:34 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Construct account object witch initial deposit
Account::Account(int initial_deposit)
    : _accountIndex(_nbAccounts++), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";created";
    std::cout << std::endl;
}

// Destroy account object
Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";closed";
    std::cout << std::endl;
}

int Account::getNbAccounts(void)
{
    return _nbAccounts;
}

int Account::getTotalAmount(void)
{
    return _totalAmount;
}

int Account::getNbDeposits(void)
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
    return _totalNbWithdrawals;
}

void Account::_displayTimestamp()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    std::cout << "[";
    std::cout << 1900 + ltm->tm_year;
    std::cout << 1 + ltm->tm_mon;
    std::cout << ltm->tm_mday;
    std::cout << "_";
    std::cout << 1 + ltm->tm_hour;
    std::cout << 1+ ltm->tm_min;
    std::cout << 1 + ltm->tm_sec;
    std::cout << "] ";
}

void Account::displayAccountsInfos()
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << _nbAccounts;
    std::cout << ";total:" << _totalAmount;
    std::cout << ";deposits:" << _totalNbDeposits;
    std::cout << ";withdrawals:" << _totalNbWithdrawals;
    std::cout << std::endl;
}

void Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";deposits:" << _nbDeposits;
    std::cout << ";withdrawals:" << _nbWithdrawals;
    std::cout << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_totalAmount += deposit;
	_amount += deposit;
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount - deposit;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << _amount;
	std::cout << ";nb_deposits:" << _nbDeposits;
	std::cout << std::endl;
}

int Account::checkAmount(void) const
{
	return (_amount);
}

bool Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal <= _amount)
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		_displayTimestamp();
		std::cout << "index:" << _accountIndex;
		std::cout << ";p_amount:" << (_amount + withdrawal);
		std::cout << ";withdrawal:" << withdrawal;
		std::cout << ";amount:" << _amount;
		std::cout << ";nb_withdrawals:" << _nbWithdrawals;
		std::cout << std::endl;
		return true;
	}
	else
	{
		_displayTimestamp();
		std::cout	<< "index:" << _accountIndex;
		std::cout	<< ";p_amount:" << _amount;
		std::cout	<< ";withdrawal:refused";
		std::cout	<< std::endl;
		return false;
	}
}
