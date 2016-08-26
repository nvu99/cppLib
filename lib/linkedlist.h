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
#include <string>

template <class T>
class LinkedList {
public:
    LinkedList();
    ~LinkedList();

    //methods interacting with the object:
    void add(T& value);
    void insert(int index, T& value);
    void remove(int index);
    void set(int index, T& value);
    T get(int i);
    void clear();
    std::string toString();
    LinkedList<T> subList(int start, int length);
    bool contains(T value) const;

    //methods returning the state of the object:
    bool isEmpty() const;
    int size() const;

    //operators:
    T& operator [](int i);
    void operator +=(T value);
    friend LinkedList<T> operator +(LinkedList<T>& input1, LinkedList<T>& input2) {
        LinkedList<T> result;
        result.plusHelper(result, input1);
        result.plusHelper(result, input2);
        return result;
    }
    friend std::ostream& operator <<(std::ostream& out, LinkedList<T>& list) {
        out << list.toString();
        return out;
    }
    friend std::istream& operator >>(std::istream& input, LinkedList<T>& list) {
        T value;
        input >> value;
        list.add(value);
        return input;
    }
    friend bool operator ==(LinkedList<T>& list1, LinkedList<T>& list2) {
        if (list1.size() != list2.size()) return false;
        ListNode<T>* node1 = list1.front;
        ListNode<T>* node2 = list2.front;
        for (int i = 0; i < list1.size(); i++) {
            if (node1->value != node2->value) return false;
            node1 = node1->next;
            node2 = node2->next;
        } return true;
    }

private:
    void plusHelper(LinkedList<T>& result, LinkedList<T>& input);
    void freeMemoryHelper(ListNode<T>*& node);
    void checkRange (int i, int max) const;
    ListNode<T>* front;
    ListNode<T>* last;
    int mysize;
};

#include "linkedlist.cpp"

#endif // LINKEDLIST_H
