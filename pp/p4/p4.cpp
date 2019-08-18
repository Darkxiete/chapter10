//
// Created by xk on 2019/8/18.
//

#include <iostream>
#include "Sales.h"

int main() {
    const double arr[4] = {1.1, 2.2, 3.3};
    Sales s1 = Sales();
    Sales s2 = Sales(arr, 10);
    s1.showSales();
    s2.showSales();

}