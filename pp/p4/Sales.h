//
// Created by xk on 2019/8/18.
//

#ifndef CHAPTER10_SALES_H
#define CHAPTER10_SALES_H


class Sales {
private:
    static const int QUARTERS = 4;
    double sales[QUARTERS];
    double average;
    double max;
    double min;
public:
    Sales();
    Sales(const double ar[], int n);
    void showSales() const;
};


#endif //CHAPTER10_SALES_H
