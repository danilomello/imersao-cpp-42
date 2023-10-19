#include <iostream>
#include <vector>
#include "Account.hpp"
#include "Bank.hpp"

using namespace std;

Bank bank = Bank();

void check_liquidity(int expected) {
	if (bank.getLiquidity() == expected)
	{
		cout << "Liquidity value match!" << endl;
	} else {
		cout << "Expected liquidity: " << expected << " - received liquidity: " 
		<< bank.getLiquidity() << endl;
	}
}

void check_withdraw(int id_account, int expected_balance) {
	if (bank.getAccount(id_account)->getBalance() == expected_balance) {
		cout << "Balance value match!" << endl;
	} else {
		cout << "Expected balance: " << expected_balance << " - actual balance: " 
		<< bank.getAccount(id_account)->getBalance() << endl;
	}
}

void check_account_deletion(int expected_acc_qty) {
	if (static_cast<int>(bank.getAccounts().size()) == expected_acc_qty) {
		cout << "Quantity of accounts match" << endl;
	} else {
		cout << "Expected accounts: " << expected_acc_qty << " - actual accounts: " 
		 << bank.getAccounts().size() << endl;
	}
}

void check_loan(int id_account, int loan_value, int expected_balance, int expected_liquidity) {
	bank.loan(id_account, loan_value);
	if (bank.getLiquidity() != expected_liquidity) {
		cout << "Expected liquidity: " << expected_liquidity << " - actual liquidity: " 
		 << bank.getLiquidity() << endl;
	} else if (bank.getAccount(2)->getBalance() != expected_balance) {
		cout << "Expected balance: " << expected_balance << " - actual balance: " 
		 << bank.getAccount(2)->getBalance() << endl;
	} else {
		cout << "Loan: account balance and liquidity match" << endl;
	}
}

int main()
{
	
	bank.createAccount(100);
	bank.createAccount(200);
	bank.createAccount(900);

	cout << "--- Account verification ---"  << endl;
	cout << bank << endl;
	cout << endl;

	bank.deposit(1, 200);
	bank.deposit(2, 200);
	bank.deposit(3, 100);

	cout << "--- Deposit verification ---"  << endl;
	/*
		Id 1 = 290
		Id 2 = 390
		Id 3 = 995
	*/
	cout << bank << endl;
	cout << endl;

	cout << "--- Liquidity verification ---"  << endl;
	// liquidity: 25
	cout << bank << endl;
	cout << endl;

	
	bank.withdraw(2, 100);
	check_withdraw(2, 290);
	bank.deleteAccount(1);
	check_account_deletion(2);
	check_liquidity(25);
	check_loan(2, 25, 315, 0);
	
}

