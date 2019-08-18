//
// Created by xk on 2019/8/18.
//

#include <iostream>
#include "Move.h"

using std::cout;

int main() {
    Move m1 = Move(1, 2);
    Move m2 = Move(2, 3);
    Move m3 = m1.add(m2);
    m3.showmove();
    m3.reset(3, 4);
    m3.showmove();
}