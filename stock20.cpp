//
// Created by summer on 2019-08-17.
//

#include <iostream>
#include "stock20.h"

using std::cout;
using std::cin;
using std::endl;

Stock::Stock() {
    cout << "Default constructor called\n";
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string &co, long n, double pr) {
    cout << "Constructor using " << co << " called\n";
    company = co;

    if (n < 0) {
        cout << "Number of shares can't be negative. "
             << company << " shares set to 0.\n";
        shares = 0;
    } else {
        shares = n;
        share_val = pr;
        set_tot();
    }
}

Stock::~Stock(){
    cout << "Bye, " << company << "!\n";
}

void Stock::buy(long num, double price) {
    if (num < 0) {
        cout << "Number of shares purchases can't be negative. "
             << "Transaction is aborted \n";
    } else {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price) {
    if (num < 0) {
        cout << "Number of shares sold can't be negative. "
             << "Transaction is aborted \n";
    } else if (num > shares) {
        cout << "You cant't sell more than you have! "
             << "Transaction is aborted.\n";
    } else {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price) {
    share_val = price;
    set_tot();
}

// promise not to change invoking object
void Stock::show() const {
    using std::ios_base;
    // Both return the value of the stream's format flags before the call.
    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout << "Company: " << company
         << " Shares: " << shares << '\n'
         << " Share Price: $" << share_val << endl;

    cout.precision(2);
    cout << " Total Worth: $" << total_val << endl;

    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}

const Stock & Stock::topval(const Stock & s) const{
    if (s.total_val > this->total_val)
        return s;
    else
        return *this;
}