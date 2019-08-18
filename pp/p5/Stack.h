//
// Created by xk on 2019/8/18.
//

#ifndef CHAPTER10_STACK_H
#define CHAPTER10_STACK_H

const int LEN = 35;
struct customer {
    char fullname[35];
    double payment;
};
typedef customer Item;

class Stack {
private:
    static const int MAX = 10;
    int top;
    Item Items[MAX];
public:
    Stack();
    bool isempty();
    bool isfull();
    bool pop(Item &item);
    bool push(Item &item);
};


#endif //CHAPTER10_STACK_H
