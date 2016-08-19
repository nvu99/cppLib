#include "vector.h"
#include <stdexcept>
#include <string>
#include <sstream>

template<typename T> Vector<T>::Vector()
{
    capacity = 50;
    elements = new T[capacity]();
    mysize = 0;
}

template<typename T> Vector<T>::~Vector() {
    delete[] elements;
}

template<typename T> T Vector<T>::get(int index) const {
    checkRange(index, 0, mysize - 1);
    return elements[index];
}

template<typename T> void Vector<T>::add(T value) {
    elements[mysize] = value;
    mysize++;
    checkResize();
}

template<typename T> void Vector<T>::checkResize() {
    if (mysize == capacity) {
        capacity *= 2;
        T* bigger = new T[capacity]();
        for (int i = 0; i < mysize; i++) {
            bigger[i] = elements[i];
        }
        delete[] elements;
        elements = bigger;
    }
}

template<typename T> int Vector<T>::size() const {
    return mysize;
}

template<typename T> void Vector<T>::insert(int index, T value) {
    checkRange(index, 0, mysize - 1);
    checkResize();
    for (int i = mysize; i > index; i--) {
        elements[i] = elements[i - 1];
    }
    elements[index] = value;
    mysize++;
}

template<typename T> std::string Vector<T>::toString() const {
    std::stringstream ss;
    for (int i = 0; i < mysize; i++) {
        ss << elements[i];
        if (i < mysize - 1) ss << ",";
    } return "{" + ss.str() + "}";
}

template<typename T> void Vector<T>::remove(int index) {
    checkRange(index, 0, mysize - 1);
    for (int i = index; i < mysize - 1; i++) {
        elements[i] = elements[i + 1];
    }
    elements[mysize - 1] = 0;
    mysize--;
}

template<typename T> bool Vector<T>::isEmpty() const {
    if (mysize == 0) return true;
    return false;
}

template<typename T> void Vector<T>::set(int index, T value) {
    checkRange(index, 0, mysize - 1);
    elements[index] = value;
}

template<typename T> void Vector<T>::checkRange(int index, int min, int max) const {
    if (index > max || index < min) throw std::invalid_argument("index '" + std::to_string(index)
                                                                + "' out of range (" + std::to_string(min)
                                                                + " - " + std::to_string(max) + ")");
}

template<typename T> void Vector<T>::clear() {
    delete[] elements;
    mysize = 0;
    Vector<T>::Vector();
}

template<typename T> T& Vector<T>::operator [](int index) {
    checkRange(index, 0, mysize - 1);
    return elements[index];
}

template<typename T> Vector<T> Vector<T>::subList(int start, int length) const {
    Vector<T> result;
    for (int i = start; i < start + length; i++) result.add(get(i));
    return result;
}

template<typename T> bool operator ==(Vector<T>& v1, Vector<T>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) return false;
    } return true;
}

template<typename T> bool operator !=(Vector<T>& v1, Vector<T>& v2) {
    if (v1 == v2) return false;
    return true;
}

template<typename T> void Vector<T>::operator +=(T value) {
    add(value);
}
