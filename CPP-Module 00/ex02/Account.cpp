#include "Account.hpp"
#include <iostream>
#include <string>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
	
void	Account::_displayTimestamp( void ) {
	time_t TimeStamp;
	time(&TimeStamp);
	struct tm *TimeInfo = localtime(&TimeStamp);

	char buffer[80];
	strftime(buffer, 80, "[%Y%m%d_%H%M%S]", TimeInfo);
	std::cout << buffer << " " << std::flush;
}

Account::Account(int initial_deposit) {
	_amount = initial_deposit;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl; 
}

Account::Account( void ) {

}

Account::~Account( void ) {
_displayTimestamp();
std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl; 
}

int	Account::getNbAccounts( void ) {
	return (_nbAccounts);
}
int	Account::getTotalAmount( void ) {
	return (_totalAmount);
}
int	Account::getNbDeposits( void ) {
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void ) {
	return (_totalNbWithdrawals);
}
void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	_amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	if (checkAmount() < withdrawal)
		return (false);
	_amount -= withdrawal;
	_nbWithdrawals += 1;
	_totalNbWithdrawals += 1;
	return (true);
}

int		Account::checkAmount( void ) const {
	return (_amount);
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}
