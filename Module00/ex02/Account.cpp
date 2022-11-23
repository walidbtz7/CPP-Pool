#include "Account.hpp"
#include <ctime>

Account::Account(int initial_deposit)
{
    this->_totalAmount = initial_deposit;
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

static int	displayAccountsInfos( void ) 
{
   
    
}