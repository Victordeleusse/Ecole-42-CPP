/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:40:37 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/20 14:25:32 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iomanip>
#include <iostream>

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
	std::cout << "index:" << this->_accountIndex 
				<< ";amount:" << this->_amount 
				<< ";created" << std::flush << std::endl;
	return;
}

Account::~Account(void)
{
	_nbAccounts--;
	_totalAmount -= this->_amount;
	std::cout << "index:" << this->_accountIndex 
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
	std::cout << "index:" << this->_accountIndex << ";p_amount:" 
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
	std::cout << "index:" << this->_accountIndex << ";p_amount:" 
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
	std::cout << "index:" << this->_accountIndex 
			<< ";amount:" << this->_amount
			<< ";deposits:" << this->_nbDeposits 
			<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
	return ;
}


