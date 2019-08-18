//
// Created by xk on 2019/8/18.
//

#include <iostream>
#include "List.hpp"

using namespace std;
int main() {
    List<int> l1(10);
    List<int> l2(1);
    l2.push_back(1);
    l2.push_back(3);
    l2.push_back(3);
    l2.show();
    cout << "l2[0] = " << l2[0] << '\n';
    cout << "l2[1] = " << l2[1] << '\n';
    cout << l2.pop() << endl;
    l2.show();
    l1 = l2;
    l1.show();
}