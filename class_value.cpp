//
// Created by summer on 2019-08-17.
//

#include <iostream>

class A {
public:
    static const int a = 1;
    int b = 2;
    void print_address_of_a() {
        std::cout << a << std::endl;
    }
};



int main() {
    A a;
    A b;
    a.print_address_of_a();
    b.print_address_of_a();
    return 0;
}