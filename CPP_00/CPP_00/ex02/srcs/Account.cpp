

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
    std::cout   << "accounts:" << 
}