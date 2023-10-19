#include <iostream>
#include "Bank.hpp"
#include "Account.hpp"

using namespace std;


Account::Account(int idConta, int value) {
    this->id = idConta;
    this->balance = value;
}

void Account::setBalance(int value) {
    this->balance = value;
}

int Account::getBalance() {
    return this-> balance;
}

int Account::getId() {
    return this->id;
}

std::ostream& operator << (std::ostream& p_os, const Account* p_account)
{
    p_os << "Account id: [" << p_account->id << "] - Account balance: [" << p_account->balance << "]";
    return (p_os);
}