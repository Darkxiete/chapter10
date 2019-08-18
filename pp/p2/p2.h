//
// Created by xk on 2019/8/18.
//

#ifndef CHAPTER10_P2_H
#define CHAPTER10_P2_H

#include <string>

using std::string;

class Person {
private:
    static const int LIMIT = 5;
    string lname;
    char fname[LIMIT];
public:
    Person() {
        lname = "";
        fname[0] = '\0';
    };

    Person(const string &ln, const char *fn = "Heyyou");

    void show() const;

    void FormatShow() const;
};


#endif //CHAPTER10_P2_H
