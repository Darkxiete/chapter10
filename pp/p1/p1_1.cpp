//
// Created by xk on 2019/8/18.
//

#include "p1.h"
#include <iostream>
using std::cout;
using std::endl;
BankAccount::BankAccount(const string &client, const string &num, double bal) {
    name = client;
    accountnum = num;
    balance = bal;
}

void BankAccount::deposit(double m) {
    balance += m;
}

void BankAccount::withdraw(double m) {
    balance -= m;
}

void BankAccount::show() const {
    cout << "Name: " << name << endl;
    cout << "Account: " << accountnum << endl;
    cout << "Balance: " << balance << endl;
}
