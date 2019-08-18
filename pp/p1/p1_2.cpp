//
// Created by xk on 2019/8/18.
//

#include <iostream>
#include "p1.h"

using std::cout;
using std::endl;

int main() {
    BankAccount b1 = BankAccount("Darkxiete", "123456", 25.1);
    b1.show();
    b1.deposit(100);
    b1.show();
    b1.withdraw(1000);
    b1.show();
}