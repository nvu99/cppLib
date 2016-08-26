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

#ifndef LISTNODE_H
#define LISTNODE_H

#include <iostream>

template<class T> class ListNode {
public:
    ListNode(T& value);
    T value;
    ListNode<T>* next;
};

template <typename T>
std::ostream& operator <<(std::ostream& out, ListNode<T>* node) {
    out << node->value;
    return out;
}

template<typename T>
ListNode<T>::ListNode(T& value) {
    this->value = value;
}

#endif // LISTNODE_H
