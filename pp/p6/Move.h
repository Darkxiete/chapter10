//
// Created by xk on 2019/8/18.
//

#ifndef CHAPTER10_MOVE_H
#define CHAPTER10_MOVE_H


class Move {
private:
    double x;
    double y;
public:
    Move(double a = 0, double b = 0);
    void showmove() const;
    Move add(const Move &m) const;
    void reset(double a = 0, double b = 0);
};


#endif //CHAPTER10_MOVE_H
