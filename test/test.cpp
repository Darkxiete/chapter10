//
// Created by xk on 2019/8/18.
//
#include <iostream>

int main() {
    /*
     * 1. 数组名+1，是+数组元素大小的字节数；数组名的地址+1，是+整个数组大小的字节数
     * 2. 指针+1，是+指针类型对应字节数；指针的地址+1，是+8
     */
    int array[5] = {1, 2, 3, 4, 5};
    std::cout << array << '\n';
    std::cout << array + 1 << '\n';
    std::cout << &array << '\n';
    std::cout << &array + 1 << '\n';
    std::cout << *(*(&array+1)-1);
}