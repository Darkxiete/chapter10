//
// Created by xk on 2019/8/18.
//
#include <string>

using std::string;

//class Accout {
//
//private:
//    string name;
//    string account;
//    double balance;
//public:
//    Accout();
//    Accout(string n, string a, double d);
//    void show();
//    bool deposit(string n, string a, double m);
//    bool withdraw(string n, string a, double m);
//};


class BankAccount1 {
private:
    string name;
    string accountnum;
    double balance;
public:
    // 默认参数在原型中，而不是函数定义中
    BankAccount(const string &client, const string &num, double bal = 0.0)
    void show() const;
    void deposit(double m);
    void withdraw(double m);
};