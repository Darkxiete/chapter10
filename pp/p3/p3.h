//
// Created by xk on 2019/8/18.
//

#ifndef CHAPTER10_P3_H
#define CHAPTER10_P3_H

class Golf {
private:
    static const int Len = 40;
    char fullname[Len];
    int handicap;
public:
    Golf();

    Golf(const char *name, int hc);

    void set_handicap(int hc);

    void showgolf() const;
};


#endif //CHAPTER10_P3_H
