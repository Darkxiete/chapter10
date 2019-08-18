//
// Created by xk on 2019/8/18.
//

#ifndef CHAPTER10_LIST_H
#define CHAPTER10_LIST_H

using namespace std;

template <typename T>
class List;

template<typename T>
class List {
private:
    T *first; // 首个地址空间
    T *last; // 当前最后一个元素所在地址的后继地址
    T *end; // 当前List后的地址


public:
    List();

    explicit List(int size);

    ~List();

    void copy(const List<T> &src);

    List<T> &operator=(const List<T> &src);

    T & operator[](int index);

    void reallocate();

    void push_back(const T &val);

    T &pop();

    bool isfull() const;

    bool isempty() const;

    void show() const;
};


#endif //CHAPTER10_LIST_H
