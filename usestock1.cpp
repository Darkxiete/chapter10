//
// Created by xk on 2019/8/17.
//

#include <iostream>
#include "stock10.h"

int main() {
    // 为了看析构函数的作用，如果没有这个大括号的化需要在`main`函数结束才能执行析构函数
    {
        using std::cout;
        using std::endl;
        cout << "Using constructor to create new objects\n";
        Stock stock1("NanoSmart", 12, 20.0);
        stock1.show();
        Stock stock2 = Stock("Boffo Objects", 2, 2.0);
        stock2.show();

        cout << "Assinging stock 1 to stock2:\n";
        stock2 = stock1;
        cout << "Listing stock1 and stock2:\n";
        cout << &stock1 << endl;
        cout << &stock2 << endl;
        stock1.show();
        stock2.show();

        cout << "Using a constructor to reset an object\n";
        stock1 = Stock("Nifty Foods", 10, 50.0);
        cout << "Revised stock1:\n";
        stock1.show();
        cout << "Done\n";
    }
    return 0;
}