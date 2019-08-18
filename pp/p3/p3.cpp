//
// Created by xk on 2019/8/18.
//

#include "p3.h"
#include <iostream>
#include <limits>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

Golf::Golf() {
    cout << "Enter fullname: ";
    if (!cin.getline(fullname, Len)) {
        cin.clear();
        cin.ignore(std::numeric_limits<char>::max(), '\n');
    }
    cout << "Enter handicap: ";
    cin >> handicap;
}

Golf::Golf(const char *name, int hc) {
    strcpy(fullname, name);
    handicap = hc;
}

void Golf::set_handicap(int hc) {
    handicap = hc;
}

void Golf::showgolf() const{
    cout << "Full name: " << fullname
         << " handicap: " << handicap << endl;
}