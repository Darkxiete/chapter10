//
// Created by xk on 2019/8/18.
//

#include "Stack.h"
#include <iostream>

using namespace std;

Stack::Stack() {
    top = 0;
}

bool Stack::isempty() {
    return top == 0;
}

bool Stack::isfull() {
    return top == MAX;
}

bool Stack::pop(Item &item) {
    if (top > 0){
        item = Items[--top];
        return true;
    }
    else
        return false;
}

bool Stack::push(Item &item) {
    if (top < MAX){
        Items[top++] = item;
        return true;
    }
    else
        return false;
}