//
// Created by xk on 2019/8/18.
//

#include <iostream>
#include "Stack.h"

using namespace std;

int main() {
    double total = 0.0;
    Item item;

    Stack s = Stack();
    char ch;
    cout << "Please enter A to add a purchase order,\n"
         << "P to process a PO, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q') {
        // 防止一次输入太多字符，将多余的字符从输入流中清出
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch)) {
            cout << '\a';
            continue;
        }
        switch (ch) {
            case 'A':
            case 'a':
                cout << "Enter full name to add:";
                cin.get(item.fullname, LEN);
                cout << "Enter payment to add:";
                (cin >> item.payment).get();
                if (s.isfull())
                    cout << "stack already full\n";
                else
                    s.push(item);
                break;
            case 'p':
            case 'P':
                if (s.isempty())
                    cout << "stack already empty\n";
                else {
                    s.pop(item);
                    cout << "Full name: " << item.fullname << "\n";
                    cout << "Payment: " << item.payment << "\n";
                    total += item.payment;
                }
                break;
        }
        cout << "Please enter A to add a purchase order,\n"
             << "P to process a PO, or Q to quit.\n";
    }
    cout << "Payment = " << total << endl;
}