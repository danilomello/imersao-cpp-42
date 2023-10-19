#include <iostream>
#include <vector>
#include <algorithm>
#include "Bank.hpp"
#include "Account.hpp"

using namespace std;


int liquidity;
int id = 0;

std::vector<Account *> clientAccounts;

Bank::Bank(){
	liquidity = 0;
}

Account* Bank::getAccount(int idAccount) {

	try {
		for (int i = 0; i < static_cast<int>(clientAccounts.size()); i++) {
			if(clientAccounts.at(i)->getId() == idAccount) {
				return clientAccounts.at(i);
			}
		}
		throw (idAccount);
	}
	catch(int id) {
		cout << "Conta com id " << id << " não encontrado" << endl;
		return NULL;
	}
}

vector<Account *> Bank::getAccounts() {
	return clientAccounts;
}

void Bank::addFunds(int value) {
	liquidity+= (value*0.05);
}

void Bank::createAccount(int _balance) {
	id++;
	Account* acc = new Account(id, _balance);
	clientAccounts.push_back(acc);
}

/*
	The bank must receive 5% of each money inflow on these client accounts.
	a regra dos 5% foi mantida dentro do método de depósito do banco
	para que a regra de negócio de depósito da conta fique isolada na
	classe da conta.
*/

void Bank::deposit(int idAccount, int value) {
	if (value <= 0) {
		cout << "The value must be greater than zero" << endl;
		return;
	}
	
	Account* acc = getAccount(idAccount);
	addFunds(value);
	int actual_balance = acc->getBalance();
		acc->setBalance(actual_balance + (value*0.95));
}

void Bank::withdraw(int idAccount, int value) {
	Account* acc = getAccount(idAccount);
	if (value < 0)
	{
		cout << "The value must be greater than zero." << endl;
	} else if (value > acc->getBalance()) {
		cout << "The value should not exceed the actual balance [" << acc->getBalance() << "]." << endl;
	} else {
		int actual_balance = acc->getBalance();
		acc->setBalance(actual_balance - value);
	}
}

void Bank::deleteAccount(int id) {
	for (vector<Account*>::iterator it = clientAccounts.begin(); it != clientAccounts.end(); ++it)
	{
		if((*it)->getId() == id) {
			delete *it;
			clientAccounts.erase(it);
			return;
		}
	}
	
}

void Bank::loan(int idAccount, int value) {
	if (value > liquidity) {
		cout << "Can't loan a value greater than bank funds." << endl;
	} else if (value < 0) {
		cout << "Loan value must be greater than zero" << endl;
	} else if (getAccount(idAccount)==NULL) {
		cout << "The account with id " << idAccount << " doen't exist." << endl;
	} else {
		Account* acc = getAccount(idAccount);
		int actual_balance = acc->getBalance();
		acc->setBalance(actual_balance + value);
		liquidity-=value;
	}
}

int Bank::getLiquidity() {
	return liquidity;
}

std::ostream& operator << (std::ostream& p_os, Bank p_bank)
	{
		p_os << "Bank informations : " << std::endl;
		p_os << "Liquidity : " << p_bank.getLiquidity() << std::endl;
		for (int i=1; i <= static_cast<int>(p_bank.clientAccounts.size()); i++) {
			p_os << p_bank.getAccount(i) << std::endl;	
		}
		return (p_os);
	}