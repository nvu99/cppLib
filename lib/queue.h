/* This file is part of cppLib
 * cppLib is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    any later version.

    cppLib is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with cppLib.  If not, see <http://www.gnu.org/licenses/>.

    Copyright (C) Thai Dai Vu Nguyen, 2016. All rights reserved.
 * */

#ifndef QUEUE_H
#define QUEUE_H

#include "listnode.h"
#include <string>
#include <sstream>

template<class T> class Queue {
public:
    Queue();
    ~Queue();
    T& back();
    void clear();
    T dequeue();
    void enqueue(T value);
    T& front();
    bool isEmpty() const;
    T peek() const;
    int size() const;
    std::string toString() const;
private:
    void clearHelper(ListNode<T>*& node);
    ListNode<T>* frontNode;
    ListNode<T>* last;
    int mysize;
};

template<typename T> Queue<T>::Queue() {
    frontNode = NULL;
    last = NULL;
    mysize = 0;
}

template<typename T> Queue<T>::~Queue() {
    clear();
}

template<typename T> T& Queue<T>::back() {
    if (mysize == 0) throw std::invalid_argument("Cannot return from empty queue.");
    return last->value;
}

template<typename T> void Queue<T>::clear() {
    last = NULL;
    clearHelper(frontNode);
    mysize = 0;
}

template<typename T> void Queue<T>::clearHelper(ListNode<T>*& node) {
    if (node != NULL) {
        clearHelper(node->next);
        delete node;
    }
}

template<typename T> T Queue<T>::dequeue() {
    T value = frontNode->value;
    ListNode<T>* trash = frontNode;
    frontNode = frontNode->next;
    delete trash;
    mysize--;
    return value;
}

template<typename T> void Queue<T>::enqueue(T value) {
    ListNode<T>* newNode = new ListNode<T>(value);
    if (mysize == 0) {
        frontNode = newNode;
        last = newNode;
    } else {
        last->next = newNode;
        last = last->next;
    } mysize++;
}

template<typename T> T& Queue<T>::front() {
    return frontNode->value;
}

template<typename T> bool Queue<T>::isEmpty() const {
    if (mysize == 0 || frontNode == NULL) return true;
    return false;
}

template<typename T> T Queue<T>::peek() const {
    return frontNode->value;
}

template<typename T> int Queue<T>::size() const {
    return mysize;
}

template<typename T> std::string Queue<T>::toString() const {
    std::stringstream ss;
    ListNode<T>* node = frontNode;
    for (int i = 0; i < mysize; i++) {
        ss << node->value;
        node = node->next;
        if (i < mysize - 1) ss << ",";
    } return "{" + ss.str() + "}";
}

template<typename T> bool operator ==(Queue<T> q1, Queue<T> q2) {
    if (q1.size() != q2.size()) return false;
    for (int i = 0; i < q1.size(); i++) {
        if (q1.dequeue() != q2.dequeue()) return false;
    } return true;
}

template<typename T> bool operator !=(Queue<T>& q1, Queue<T>& q2) {
    if (q1 == q2) return false;
    return true;
}

template<typename T>std::ostream& operator <<(std::ostream& out, Queue<T> q) {
    for (int i = 0; i < q.size(); i++) out << q.dequeue();
    return out;
}

template<typename T>std::istream& operator >>(std::istream& in, Queue<T>& q) {
    T value;
    in >> value;
    q.enqueue(value);
    return in;
}

#endif // QUEUE_H
