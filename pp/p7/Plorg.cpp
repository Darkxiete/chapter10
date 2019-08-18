//
// Created by xk on 2019/8/18.
//

#include "Plorg.h"
#include <iostream>
#include <cstring>

Plorg::Plorg() {
    strcpy(name, "Plorg");
    CI = 0;
}

Plorg::Plorg(const char *n, int ci) {
    strcpy(name, n);
    CI = ci;
}

void Plorg::setci(int ci) {
    CI = ci;
}

void Plorg::show() const {
    std::cout << "Name: " << name << " CI: " << CI << std::endl;
}

