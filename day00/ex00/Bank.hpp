#include <iostream>
#include <map>
#include <vector>
#include "Account.hpp"

using namespace std;

class Bank
{
	private:
	int liquidity;
	vector<Account *> clientAccounts;
	void addFunds(int value);

	public:
		Bank();
		Account* getAccount(int idAccount);
		void createAccount(int balance);
		void deposit(int idAccount, int value);
		void deleteAccount(int id);
		vector<Account *> getAccounts();
		int getLiquidity();
		void withdraw(int idAccount, int value);
		void loan(int idAccount, int value);
		friend std::ostream& operator<< (std::ostream& p_os, Bank p_bank);
		Account* operator [] (int index);

};