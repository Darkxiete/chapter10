//
// Created by summer on 2019-08-17.
//

#ifndef CHAPTER10_STACK_H
#define CHAPTER10_STACK_H

typedef unsigned long Item;

class Stack {
private:
    enum {
        MAX = 10
    };
    Item items[MAX];
    int top;
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item & item);
    bool pop(Item & term);
};

#endif //CHAPTER10_STACK_H
