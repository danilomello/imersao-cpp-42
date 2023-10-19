#include <iostream>

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
	
    friend class Bank;

    private:
    int id;
	int balance;
    void setBalance(int value);
    int getBalance();
    int getId();
    
    Account(int id, int balance);
    Account();

    friend void deposit(int idAccount, int value);
    friend Account* getAccount(int idAccount);
    friend void createAccount(int balance);
    friend std::ostream& operator << (std::ostream& p_os, const Account p_account);
    friend void deleteAccount(int id);
    friend void check_withdraw(int id_account, int expected_value);
    friend void check_loan(int id_account, int loan_value, int expected_balance, int expected_liquidity);
    friend std::ostream& operator << (std::ostream& p_os, const Account* p_account);
};

#endif