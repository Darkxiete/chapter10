//
// Created by xk on 2019/8/18.
//

#include <iostream>
#include "p3.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
    Golf g1 = Golf();
    Golf g2 = Golf("Darkxiete", 100);
    g1.showgolf();
    g2.showgolf();
}