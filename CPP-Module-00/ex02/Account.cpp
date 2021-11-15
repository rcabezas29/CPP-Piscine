#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = 0;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = this->_nbAccounts++;
	this->_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
		<< initial_deposit << ";created" << std::endl;
}

Account::Account(void)
{
	this->_accountIndex = 0;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
		<< this->_amount << ";closed" << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
		<< ";deposits:" << _totalNbDeposits << ";withdrawls:"
		<< _totalNbWithdrawals << std::endl;

}

void	Account::makeDeposit(int deposit)
{
	int	previous;

	previous = _amount;
	_amount += deposit;
	this->_nbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:"
		<< previous << ";deposit:" << deposit <<
		";amount:" << this->_amount << ";deposits:" << _nbDeposits
		<< ";withdrawls:" << _nbWithdrawals << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int	previous;
	
	previous = _amount;
	if (withdrawal > _amount)
	{
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:"
		<< previous << ";withdrawal:refused" << std::endl;
		return false;
	}
	_amount -= withdrawal;
	this->_nbWithdrawals++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:"
		<< previous << ";withdrawal:" << withdrawal <<
		";amount:" << this->_amount << ";deposits:" << _nbDeposits
		<< ";withdrawls:" << _nbWithdrawals << std::endl;
	return true;
}

int		Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
		<< this->_amount << ";deposits:" << _nbDeposits
		<< ";withdrawls:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t	timestamp = time(0);
	std::cout << "[" << timestamp << "] ";
}
