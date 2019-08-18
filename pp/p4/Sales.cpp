//
// Created by xk on 2019/8/18.
//

#include "Sales.h"
#include <iostream>

using namespace std;

Sales::Sales() {
    double sum = 0;
    min = INT32_MAX;
    max = INT32_MIN;
    for (double &sale : this->sales) {
        cout << "Enter the sales" << endl;
        cin >> sale;
        sum += sale;
        if (sale > max)
            this->max = sale;
        if (sale < min)
            this->min = sale;
    }
    this->average = sum / QUARTERS;
}

Sales::Sales(const double *ar, int n) {
    double sum = 0;
    min = INT32_MAX;
    max = INT32_MIN;
    int i = 0;
    for (; i < (4 > n ? n : 4); i++) {
        sales[i] = ar[i];
        sum += ar[i];
        if (ar[i] > max)
            max = ar[i];
        if (ar[i] < min)
            min = ar[i];
    }
    average = sum / QUARTERS;
    for (int j = i; j < 4; j++) {
        sales[j] = 0;
    }
}
void Sales::showSales() const {
    cout << "Sales" << endl;
    for (auto sale: sales) {
        cout << sale << " ";
    }
    cout << endl;
    cout << "average = " << average << endl;
    cout << "max = " << max << endl;
    cout << "min = " << min << endl;
}
