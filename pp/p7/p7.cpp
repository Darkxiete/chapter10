//
// Created by xk on 2019/8/18.
//

#include "Plorg.h"
#include <iostream>

int main() {
    Plorg p0;
    Plorg p1 = Plorg();
    Plorg p2 = Plorg("Darkxiete");
    p0.show();
    p1.show();
    p2.show();
    p1.setci(100);
    p1.show();
}