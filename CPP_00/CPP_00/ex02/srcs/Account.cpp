

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
    std::cout    << "index:" << _accountIndex
                << ";amount:" << _amount
                << ";created"
                << std::endl;
}

// Destroy account object
Account::~Account()
{
    _displayTimestamp();
    std::cout   << "index:" << _accountIndex
                << ";amount:" << _amount
                << ";closed"
                << std::endl;
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
    std::cout   << "["
                << 1900 + ltm->tm_year
                << 1 + ltm->tm_mon
                << ltm->tm_mday
                << "_"
                << 1 + ltm->tm_hour
                << 1+ ltm->tm_min
                << 1 + ltm->tm_sec
                << "] ";
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
	std::cout	<< "index:" << _accountIndex;
	std::cout	<< ";p_amount:" << _amount - deposit;
	std::cout	<< ";deposit:" << deposit;
	std::cout	<< ";amount:" << _amount;
	std::cout	<< ";nb_deposits:" << _nbDeposits;
	std::cout	<< std::endl;
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
		std::cout	<< "index:" << _accountIndex 
					<< ";p_amount:" << (_amount + withdrawal)
					<< ";withdrawal:" << withdrawal
					<< ";amount:" << _amount
					<< ";nb_withdrawals:" << _nbWithdrawals
					<< std::endl;
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
