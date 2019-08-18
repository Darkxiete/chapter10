//
// Created by xk on 2019/8/18.
//

#ifndef CHAPTER10_P1_H
#define CHAPTER10_P1_H

#include <string>
using std::string;

class BankAccount {
private:
    string name;
    string accountnum;
    double balance;
public:
    // 默认参数在原型中，而不是函数定义中
    BankAccount(const string &client, const string &num, double bal = 0.0);
    void show() const;
    void deposit(double m);
    void withdraw(double m);
};

#endif //CHAPTER10_P1_H
