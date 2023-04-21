/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Execution.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:20:23 by vde-leus          #+#    #+#             */
/*   Updated: 2023/04/21 18:31:25 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include <utility>
#include "Account.hpp"

int	main(void)
{
	typedef std::vector<Account>										Accounts_tab;
	typedef std::vector<int>											Amounts_tab;
	typedef std::pair<Accounts_tab::iterator, Amounts_tab::iterator>	Account_amount_tab;
	
	int const		amount[] = {10, 20, 30, 40, 50, 60, 70};
	size_t const	size_bank = (sizeof(amount) / sizeof(amount[0]));
	Accounts_tab	accounts(amount, amount + size_bank);	// CONSTRUCTION IMPORTANTE ! - Initialisation of a vector from an array
	Accounts_tab::iterator	acc_begin = accounts.begin();
	Accounts_tab::iterator	acc_end = accounts.end();
	
	int const		deposits[] = {0, 100, 50, 20, 200, 0, 100};
	size_t const	size_deposits = (sizeof(deposits) / sizeof(deposits[0]));
	Amounts_tab		deposits_sold(deposits, deposits + size_deposits);
	Amounts_tab::iterator	dep_begin = deposits_sold.begin();
	Amounts_tab::iterator	dep_end = deposits_sold.end();

	// int const		withdrawals[] = {100, 10, 10, 200, 200, 50, 10};
	// size_t const	size_withdrawals = (sizeof(withdrawals) / sizeof(withdrawals[0]));
	// Amounts_tab		withdrawals_sold(withdrawals, withdrawals + size_withdrawals);
	// Amounts_tab::iterator with_begin = withdrawals_sold.begin();
	// Amounts_tab::iterator with_end = withdrawals_sold.end();
	
	Account::displayAccountsInfos();
	std::for_each(acc_begin, acc_end, std::mem_fun_ref(&Account::displayStatus));
	
	Account_amount_tab	bank(acc_begin, dep_begin);
	while (bank.first != acc_end && bank.second != dep_end)
	{
		bank.first->makeDeposit(*bank.second);
		bank.first++;
		bank.second++;
	}
	// acc_begin = accounts.begin();
	// dep_begin = deposits_sold.begin();
	std::for_each(acc_begin, acc_end, std::mem_fun_ref(&Account::displayStatus));
	
	return (0);	
}