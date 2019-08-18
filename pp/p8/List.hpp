//
// Created by xk on 2019/8/18.
//

#include "List.h"
#include <iostream>

using namespace std;

template<typename T>
class List;

template<typename T>
List<T>::List() {
    first = nullptr;
    last = first;
    end = first;
}

template<typename T>
List<T>::List(int size) {
    first = new T[size];
    last = first;
    end = first + size;
}

template<typename T>
bool List<T>::isempty() const {
    return first == last;
}

template<typename T>
bool List<T>::isfull() const {
    return last == end;
}

template<typename T>
void List<T>::copy(const List<T> &src) {
    int size = end - first;
    first = new T[size];
    last = first;
    for (T *p = src.first; p != src.last; p++)
        *last++ = *p;
    end = first + size;
}

template<typename T>
List<T> &List<T>::operator=(const List<T> &src) {
    if (this == &src) { return *this; }
    if (first != nullptr)
        delete[] first;
    int size = end - first;
    first = new T[size];
    last = first;
    for (T *p = src.first; p != src.last; p++)
        *last++ = *p;
    end = first + size;
}

template<typename T>
T &List<T>::operator[](int index) {
    return first[index];
}

template<typename T>
void List<T>::reallocate() {
    if (isfull()) {
        T *old = first;
        int _size = last - first;
        int size = end - first;
        first = new T[size * 2];
        for (int i = 0; i < size; i++)
            first[i] = old[i];
        last = first + _size;
        end = first + size;
        if (old != nullptr)
            delete[] old;
    }
}

template<typename T>
void List<T>::push_back(const T &val) {
    reallocate();
    *(last++) = val;
}

template<typename T>
T &List<T>::pop() {
    return *(--last);
}

template<typename T>
List<T>::~List() {
    if (first)
        delete[] first;
    first = nullptr;
    last = first;
    end = first;
}

template<typename T>
void List<T>::show() const {
    for (T *p = first; p != last; p++)
        cout << *p << " ";
    cout << endl;
}
