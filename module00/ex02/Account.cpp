#include "Account.hpp"
#include <iostream>
#include <string>
#include <iomanip>

/*static/classvariables must be initialized outside of the class*/
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


int	Account::getNbAccounts( void )
{
    return (_nbAccounts);
}
int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}
int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp(void)
{
	const time_t	now = time(0);
	tm				*ltm = localtime(&now);

	std::cout << "[";
    std::cout << 1900 + ltm->tm_year;
    // month starts at 0;
    std::cout << std::setfill('0') << std::setw(2) << 1 + ltm->tm_mon;
    std::cout << std::setfill('0') << std::setw(2) << ltm->tm_mday;
    std::cout << "_";
    std::cout << std::setfill('0') << std::setw(2) << ltm->tm_hour;
    std::cout << std::setfill('0') << std::setw(2) << ltm->tm_min;
    std::cout << std::setfill('0') << std::setw(2) << ltm->tm_sec;
    std::cout << "] ";
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << " accounts:" << Account::getNbAccounts();
    std::cout << ";total:" << Account::getTotalAmount();
    std::cout << ";deposits:" << Account::getNbDeposits();
    std::cout << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void Account::displayStatus ( void ) const
{
    _displayTimestamp();
    std::cout << " index:" << Account::_accountIndex;
    std::cout << ";amount:" << Account::_amount;
    std::cout << ";deposits:" << Account::_nbDeposits;
    std::cout << ";withdrawals:" << Account::_nbWithdrawals << std::endl;
}

void Account::makeDeposit( int deposit )
{
    _nbDeposits++;
    _totalNbDeposits++;
    _displayTimestamp();
    std::cout << " index:" << Account::_accountIndex;
    std::cout << ";p_amount:" << Account::_amount;
    _amount += deposit;
    _totalAmount += deposit;
    std::cout << ";deposit:" << deposit;
    std::cout << ";amount:" << Account::_amount;
    std::cout << ";nb_deposits:" << Account::_nbDeposits << std::endl;
}

bool Account::makeWithdrawal (int withdrawal )
{
    _displayTimestamp();
    std::cout << " index:" << Account::_accountIndex;
    std::cout << ";p_amount:" << Account::_amount;
    std::cout << ";withdrawal:";
    if (_amount < withdrawal)
    {
        std::cout << "refused" << std::endl;
        return (0);
    }
    else
    {
        std::cout << withdrawal;
        _amount -= withdrawal;
        std::cout << ";amount:" << _amount;
        std::cout << ";nb_withdrawals:" << ++_nbWithdrawals << std::endl;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
        return (1);   
    }
}

int Account::checkAmount ( void ) const
{
    return (_amount);
}



Account::Account (int initial_deposit)
{
    _accountIndex = Account::getNbAccounts();
    _nbAccounts++;
    _amount = initial_deposit;
    _totalAmount += _amount;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ';';
    std::cout << "amount:" << _amount <<";created"<< std::endl;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";closed" << std::endl;
}