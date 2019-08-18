//
// Created by xk on 2019/8/18.
//

#include <iostream>
#include "p2.h"

using std::string;
using std::cout;
using std::endl;

int main() {
    Person persons[3] = {
            Person(),
            Person("Symthecraft"),
            Person("Dimwiddy", "Sam")
    };
    for (auto p: persons) {
        p.show();
        p.FormatShow();
    }
}