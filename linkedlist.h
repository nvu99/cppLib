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

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "listnode.h"
#include "stdexcept"

template <class T>
class LinkedList {
public:
    LinkedList();
    ~LinkedList();
    void add(T value);
    int size() const;
    T get(int i);
    void clear();
    void insert(int index, T value);
    void remove(int index);
    bool isEmpty();
    std::string toString();
    LinkedList<T> subList(int start, int length);
    void set(int index, T value);
private:
    void freeMemoryHelper(ListNode<T>*& node);
    void checkRange (int i, int max) const;
    ListNode<T>* front;
    int mysize;
};

template <typename T> std::ostream& operator <<(std::ostream& out, LinkedList<T>& list) {
    for (int i = 0; i < list.size(); i++) out << list.get(i);
    return out;
}

template <typename T> LinkedList<T>::LinkedList() {
    front = NULL;
    mysize = 0;
}

template <typename T> LinkedList<T>::~LinkedList() {
    clear();
}

template <typename T> void LinkedList<T>::freeMemoryHelper(ListNode<T>*& node) {
    if (node != NULL) freeMemoryHelper(node->next);
    delete node;
}

template <typename T> void LinkedList<T>::add(T value) {
    if (mysize == 0) {
        front = new ListNode<T>(value);
    }
    else {
        ListNode<T>* curr = front;
        for (int i = 0; i < mysize - 1; i++) curr = curr->next;
        curr->next = new ListNode<T>(value);
    }
    mysize++;
}

template <typename T> void LinkedList<T>::insert(int index, T value) {
    checkRange(index, mysize);
    ListNode<T>* newNode = new ListNode<T>(value);
    if (index == 0) {
        newNode->next = front;
        front = newNode;
    } else {
        ListNode<T>* curr = front;
        for (int i = 0; i < index - 1; i++) curr = curr->next;
        newNode->next = curr->next;
        curr->next = newNode;
    }
    mysize++;
}

template <typename T> void LinkedList<T>::remove(int index) {
    checkRange(index, mysize - 1);
    if (index == 0) {
        ListNode<T>* trash = front;
        front = front->next;
        delete trash;
    } else {
        ListNode<T>* curr = front;
        for (int i = 0; i < index - 1; i++) curr = curr->next;
        ListNode<T>* trash = curr->next;
        curr->next = curr->next->next;
        delete trash;
    }
    mysize--;
}

template <typename T> T LinkedList<T>::get(int i) {
    checkRange(i, mysize - 1);
    ListNode<T>* node = front;
    for (int a = 0; a < i; a++) node = node->next;
    return node->value;
}

template <typename T> int LinkedList<T>::size() const {
    return mysize;
}

template <typename T> void LinkedList<T>::checkRange(int i, int max) const {
    if (i >= max + 1 || i < 0) throw std::invalid_argument("index '" + std::to_string(i) + "' out of valid range (0 - "
                                               + std::to_string(max) + ")");
}

template <typename T> void LinkedList<T>::clear() {
    freeMemoryHelper(front);
    mysize = 0;
    front = NULL;
}

template <typename T> bool LinkedList<T>::isEmpty() {
    if (front == NULL) return true;
    return false;
}

template <typename T> std::string LinkedList<T>::toString() {
    std::string result;
    ListNode<T>* node = front;
    for (int i = 0; i < mysize; i++) {
        result += std::to_string(node->value);
        node = node->next;
    }
    return result;
}

template <typename T> LinkedList<T> LinkedList<T>::subList(int start, int length) {
    if (length == 0) throw std::invalid_argument("length must be at least 1");
    LinkedList<T> result;
    for (int i = start; i < start + length; i++) {
        result.add(get(i));
    }
    return result;
}

template <typename T> void LinkedList<T>::set(int index, T value) {
    checkRange(index, mysize - 1);
    ListNode<T>* node = front;
    for (int i = 0; i < index; i++) node = node->next;
    node->value = value;
}

#endif // LINKEDLIST_H
