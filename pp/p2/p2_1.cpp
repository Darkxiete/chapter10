//
// Created by xk on 2019/8/18.
//

#include <iostream>
#include <string>
#include "p2.h"

using std::string;
using std::cout;
using std::endl;

Person::Person(const string &ln, const char *fn) {
    lname = ln;
    for(int i = 0; *fn; fn++, i++)
        fname[i] = *fn;
}

void Person::show() const {
    cout << "First name: " << fname;
    cout << " Last name: " << lname << endl;
}

void Person::FormatShow() const {
    cout << "Last name: " << lname;
    cout << " First name: " << fname << endl;
}