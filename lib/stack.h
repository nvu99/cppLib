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

#ifndef STACK_H
#define STACK_H

#include <string>
#include "listnode.h"
#include <sstream>
#include <stdexcept>

template<class T> class Stack {
public:
    Stack();
    ~Stack();
    void clear();
    bool isEmpty() const;
    T peek() const;
    T pop();
    void push(T value);
    int size() const;
    std::string toString();

    friend bool operator ==(Stack<T>& stack1, Stack<T>& stack2) {
        if (stack1.size() != stack2.size()) return false;
        ListNode<T>* node1 = stack1.root;
        ListNode<T>* node2 = stack2.root;
        for (int i = 0; i < stack1.size(); i++) {
            if (node1->value != node2->value) return false;
            node1 = node1->next;
            node2 = node2->next;
        } return true;
    }

private:
    ListNode<T>* root;
    int mysize;
};

template<typename T> Stack<T>::Stack() {
    root = NULL;
    mysize = 0;
}

template<typename T> Stack<T>::~Stack() {
    clear();
}

template<typename T> void Stack<T>::clear() {
    clearHelper(root);
    mysize = 0;
}

template<typename T> void clearHelper(ListNode<T>*& node) {
    if (node != NULL) {
        clearHelper(node->next);
        delete node;
    }
}

template<typename T> bool Stack<T>::isEmpty() const {
    if (mysize == 0) return true;
    return false;
}

template<typename T> T Stack<T>::peek() const {
    if (root == NULL || mysize == 0) throw std::invalid_argument("Cannot peek an empty stack.");
    return root->value;
}

template<typename T> T Stack<T>::pop() {
    if (root == NULL || mysize == 0) throw std::invalid_argument("Cannot pop from empty stack.");
    T value = root->value;
    ListNode<T>* trash = root;
    root = root->next;
    delete trash;
    mysize--;
    return value;
}

template<typename T> void Stack<T>::push(T value) {
    ListNode<T>* newNode = new ListNode<T>(value);
    if (mysize == 0) root = newNode;
    else {
        newNode->next = root;
        root = newNode;
    }
    mysize++;
}

template<typename T> int Stack<T>::size() const {
    return mysize;
}

template<typename T> std::string Stack<T>::toString() {
    std::stringstream ss;
    ListNode<T>* node = root;
    for (int i = 0; i < mysize; i++) {
        ss << node->value;
        node = node->next;
        if (i < mysize - 1) ss << ",";
    } return "{" + ss.str() + "}";
}

template<typename T> bool operator !=(Stack<T>& stack1, Stack<T>& stack2) {
    if (stack1 == stack2) return false;
    return true;
}

template<typename T> std::ostream& operator <<(std::ostream& out, Stack<T> s) {
    for (int i = 0; i < s.size(); i++) {
        out << s.pop();
    } return out;
}

template<typename T> std::istream& operator >>(std::istream& in, Stack<T>& s) {
    T value;
    in >> value;
    s.push(value);
    return in;
}

#endif // STACK_H
