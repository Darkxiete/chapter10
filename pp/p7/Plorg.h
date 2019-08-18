//
// Created by xk on 2019/8/18.
//

#ifndef CHAPTER10_PLORG_H
#define CHAPTER10_PLORG_H


class Plorg {
private:
    char name[20];
    int CI;
public:
    Plorg();

    Plorg(const char *n, int ci = 50);

    void setci(int ci);

    void show() const;

};

#endif //CHAPTER10_PLORG_H
