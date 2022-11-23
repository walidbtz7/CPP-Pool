#include "Account.hpp"
#include <ctime>

Account::Account(int initial_deposit)
{
    static int a;
    _accountIndex = a++;
    this->_totalAmount = initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _totalAmount << ";created" << std::endl;
}

static int	getNbAccounts( void ) 
{
    return __nbAccounts;
}

static int	getTotalAmount( void ) 
{
    return _totalAmount;
}

static int	getNbDeposits( void ) 
{
    return _totalNbDeposits;
}

static int	getNbWithdrawals( void ) 
{
    return _totalNbWithdrawals;
}

static void _displayTimestamp(void)
{
    std::time_t  t = std::time(0);
    std::tm* now = std::localtime(&t);
    std::cout << "[" << now->tm_year + 1900 << now->tm_mon << now->tm_mday << "_"  << now->tm_hour << now->tm_min << now->tm_sec << "] ";
}

static int	displayAccountsInfos( void ) 
{
}
