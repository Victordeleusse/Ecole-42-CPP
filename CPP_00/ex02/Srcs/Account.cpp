/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:40:37 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/20 18:05:45 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iomanip>
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{	
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex 
				<< ";amount:" << this->_amount 
				<< ";created" << std::flush << std::endl;
	return;
}

Account::~Account(void)
{
	_nbAccounts--;
	_totalAmount -= this->_amount;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex 
				<< ";amount:" << this->_amount 
				<< ";closed" << std::flush << std::endl;
	return;
}

int	Account::checkAmount(void)const
{
	return (this->_amount);
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" 
		<< this->_amount << std::flush;
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << ";deposit:" << deposit << ";amount:" << this->_amount
		<< ";nb_deposit:" << this->_nbDeposits << std::endl;
	return;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" 
		<< this->_amount << std::flush;
	if (this->checkAmount() >= withdrawal)
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		std::cout << ";withdrawal:" << withdrawal << ";amount:" 
			<< this->_amount << ";nb_withdrawal:" 
			<< this->_nbWithdrawals << std::endl;
		return (true);
	}
	std::cout << "refused" << std::endl;
	return (false);
}

int	Account::getNbAccounts(void)
{
	return(_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return(_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return(_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return(_totalNbWithdrawals);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex 
			<< ";amount:" << this->_amount
			<< ";deposits:" << this->_nbDeposits 
			<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
	return ;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";total:"
			<< _totalAmount << ";deposits:" << _totalNbDeposits
			<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
	return ;
}

void	Account::_displayTimestamp(void)
{
	std::time_t	t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t);
    
	std::cout << "[" << std::setw(4) << (now->tm_year + 1900) 
				<< std::setfill('0') << std::setw(2) << (now->tm_mon + 1) 
				<< std::setfill('0') << std::setw(2) << now->tm_mday << "_" 
				<< std::setfill('0') << std::setw(2) << now->tm_hour 
				<< std::setfill('0') << std::setw(2) << now->tm_min 
				<< std::setfill('0') << std::setw(2) << now->tm_sec 
				<< "]" << std::flush;	
}
