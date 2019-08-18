//
// Created by xk on 2019/8/18.
//

#include "Move.h"
#include <iostream>

using std::cout;

Move::Move(double a, double b) {
    x = a;
    y = b;
}

void Move::showmove() const {
    cout << "x = " << x << ", y = " << y << '\n';
}

Move Move::add(const Move &m) const {
    double _x, _y;
    _x = x + m.x;
    _y = y + m.y;
    return Move(_x, _y);
}

void Move::reset(double a, double b) {
    x = a;
    y = b;
}
