#include "linkedlist.h"
#include <stdexcept>
#include <string>
#include <sstream>

template <typename T> LinkedList<T>::LinkedList() {
    front = NULL;
    last = NULL;
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
        last = front;
    }
    else {
        last->next = new ListNode<T>(value);
        last = last->next;
    }
    mysize++;
}

template <typename T> void LinkedList<T>::insert(int index, T value) {
    checkRange(index, mysize);
    ListNode<T>* newNode = new ListNode<T>(value);
    if (index == 0) {
        newNode->next = front;
        front = newNode;
    } else if (index == mysize) {
        add(value);
        return;
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
        if (index >= mysize - 1) {
            last = front;
            for (int i = 0; i < mysize - 2; i++) last = last->next;
        }
    }
    mysize--;
}

template <typename T> T LinkedList<T>::get(int i) {
    return LinkedList<T>::operator [](i);
}

template <typename T> void LinkedList<T>::set(int index, T value) {
    checkRange(index, mysize - 1);
    if (index == mysize - 1) last->value = value;
    else {
        ListNode<T>* node = front;
        for (int i = 0; i < index; i++) node = node->next;
        node->value = value;
    }
}

template <typename T> void LinkedList<T>::clear() {
    freeMemoryHelper(front);
    mysize = 0;
    front = NULL;
    last = NULL;
}

template <typename T> std::string LinkedList<T>::toString() {
    ListNode<T>* node = front;
    std::stringstream ss;
    for (int i = 0; i < mysize; i++) {
        ss << node->value;
        node = node->next;
        if (i < mysize - 1) ss << ",";
    } return "{" + ss.str() + "}";
}

template <typename T> int LinkedList<T>::size() const {
    return mysize;
}

template <typename T> void LinkedList<T>::checkRange(int i, int max) const {
    if (i >= max + 1 || i < 0) throw std::invalid_argument("index '" + std::to_string(i) + "' out of valid range (0 - "
                                               + std::to_string(max) + ")");
}

template <typename T> bool LinkedList<T>::isEmpty() const {
    if (front == NULL) return true;
    return false;
}

template <typename T> bool LinkedList<T>::contains(T value) const {
    ListNode<T>* node = front;
    for (int i = 0; i < mysize; i++) {
        if (node->value == value) return true;
        node = node->next;
    } return false;
}

template <typename T> LinkedList<T> LinkedList<T>::subList(int start, int length) {
    LinkedList<T> result;
    ListNode<T>* node = front;
    for (int i = 0; i < start; i++) node = node->next;
    for (int i = 0; i < length; i++) {
        result.add(node->value);
        node = node->next;
    } return result;
}

template <typename T> bool operator ==(LinkedList<T>& list1, LinkedList<T>& list2) {
    if (list1.size() != list2.size()) return false;
    if (list1.toString() == list2.toString()) return true;
    else return false;
}

template <typename T> bool operator !=(LinkedList<T>& list1, LinkedList<T>& list2) {
    if (list1 == list2) return false;
    return true;
}

template <typename T> T& LinkedList<T>::operator [](int i) {
    checkRange(i, mysize - 1);
    if (i == mysize - 1) return last->value;
    ListNode<T>* node = front;
    for (int a = 0; a < i; a++) node = node->next;
    return node->value;
}

template <typename T> void LinkedList<T>::operator +=(T value) {
    add(value);
}

template <typename T> void LinkedList<T>::plusHelper(LinkedList<T>& result, LinkedList<T>& input) {
    ListNode<T>* node = input.front;
    for (int i = 0; i < input.size(); i++) {
        result.add(node->value);
        node = node->next;
    }
}
