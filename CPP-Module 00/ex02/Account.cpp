#include "Account.hpp"

Account::Account(int initial_deposit) {
	index
	this->_amount = initial_deposit;
	this->_accountIndex;
	std::cout << displayTimestamp();
	std::cout << "index:" << index << ";amount:" << initial_deposit << ";created" << std::endl; 
}

Account::Account( void ) {

}

Account::~Account( void ) {

}

static int	getNbAccounts( void ) {
	return (this->_NbAccounts);
}
static int	getTotalAmount( void ) {
	return (this->_TotalAmount);
}
static int	getNbDeposits( void ) {
	return (this->NbDeposits);
}
static int	getNbWithdrawals( void ) {
	return (this->_NbWithdrawals);
}
static void	displayAccountsInfos( void ) {
	std::cout << displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals" << getNbWithdrawals() << std::endl;
}


	void	makeDeposit( int deposit );
	bool	makeWithdrawal( int withdrawal );
	int		checkAmount( void ) const;

void	displayStatus( void ) const {
	std::cout << displayTimestamp();
	std::cout << "index:" << () << ";";
	std::cout << "amount:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals" << getNbWithdrawals() << std::endl;
}