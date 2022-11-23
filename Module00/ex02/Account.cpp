#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _amount = initial_deposit;
    _totalAmount += _amount;
    _nbWithdrawals = 0;
    _nbDeposits = 0;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

int	Account::getNbAccounts( void ) 
{
    return Account::_nbAccounts;
}

int	Account::getTotalAmount( void ) 
{
    return Account::_totalAmount;
}

int	Account::getNbDeposits( void ) 
{
    return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) 
{
    return Account::_totalNbWithdrawals;
}

void Account::_displayTimestamp(void)
{
    std::time_t  t = std::time(0);
    std::tm* now = std::localtime(&t);
    std::cout << "[" << now->tm_year + 1900 << now->tm_mon << now->tm_mday << "_"  << now->tm_hour << now->tm_min << now->tm_sec << "] ";
}

void	Account::displayAccountsInfos( void ) 
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbDeposits() << ";total:" << getTotalAmount() << ";deposits" << getNbDeposits()  << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit ) 
{
    _amount = deposit;
    _totalAmount += _amount;
    _totalNbDeposits++;
    _nbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal ) 
{
    if(_amount - withdrawal < 0)
        return (false);
    _amount -= withdrawal;
    _totalAmount -=  _amount;
    _totalNbWithdrawals++;
    _nbWithdrawals++;
    return (true);
}

int		Account::checkAmount( void ) const
{
    return (_amount);
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << ";deposits" << _nbDeposits  << ";withdrawals:" << _nbWithdrawals << std::endl;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}