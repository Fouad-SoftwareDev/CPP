#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals= 0;

Account::Account(int initial_deposit)
{
	if (initial_deposit < 0)
	{
		std::cout << "error creating account with a negative deposite" << std::endl;
		return ;
	}
	_amount = initial_deposit;
	_totalAmount += _amount;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount <<";created" << std::endl;
}

Account::~Account()
{
	_nbAccounts--;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount <<";closed" << std::endl;
}
int Account::getNbAccounts()
{
	return _nbAccounts;
}

int		Account::getTotalAmount( void )
{
	return _totalAmount;
}

int		Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int		Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount 
			  << ";deposits:" << _totalNbDeposits  << ";withdrawals:" << _totalNbWithdrawals 
			  << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	if (deposit < 0)
		std::cout << "failed to make a deposit(negative amount entered)" << std::endl;
	else
	{
		_nbDeposits++;
		_totalNbDeposits++;
		_amount += deposit;
		_totalAmount += deposit;
		std::cout << "index:" <<_accountIndex << ";p_amount:" << (_amount - deposit) << ";deposit:" << deposit << ";amount:" <<  _amount<< ";nb_deposits:" << _nbDeposits << std::endl;
	}
}
bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	if (_amount > withdrawal && withdrawal >= 0)
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		std::cout << "index:" <<_accountIndex << ";p_amount:" << (_amount + withdrawal) << ";withdrawal:" << withdrawal << ";amount:" <<  _amount<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
	std::cout << "index:" << _accountIndex << ";p_amount:" <<_amount << ";withdrawal:refused" << std::endl;
	return (false);
}

int		Account::checkAmount( void ) const
{
	return _amount;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex 
			  << ";amount:" << _amount
			  << ";deposits:" << _nbDeposits
			  << ";withdrawals:" << _nbWithdrawals
			  << std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t now = time(0);
    tm *ltm = localtime(&now);
    std::cout	<< "["
        		<< 1900 + ltm->tm_year
        		<< std::setw(2) << std::setfill('0') << 1 + ltm->tm_mon
        		<< std::setw(2) << std::setfill('0') << ltm->tm_mday
        		<< "_"
        		<< std::setw(2) << std::setfill('0') << ltm->tm_hour
        		<< std::setw(2) << std::setfill('0') << ltm->tm_min
        		<< std::setw(2) << std::setfill('0') << ltm->tm_sec
        		<< "] ";
}