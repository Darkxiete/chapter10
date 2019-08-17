//
// Created by summer on 2019-08-17.
//
#include <iostream>

enum egg_old {
    Small, Medium, Large, Jumbo
};
enum class t_shirt {
    Small, Medium, Large, Xlarge
};
// underlying type for pizza is short
enum class pizza : short {
    Small, Medium, Large, XLarge
};

int main() {
    using std::cout;
    using std::endl;
    egg_old one = Medium;
    t_shirt rolf = t_shirt::Large; // can't implicit type conversion

    int king = one;
    cout << "king = " << king << endl;

//    int ring = rolf; // not allowed
    if (king < Jumbo)
        cout << "Jumbo converted to int before comparison.\n";
//    if (king < t_shirt::Medium) // not allowed

}
