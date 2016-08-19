#ifndef VECTOR_H
#define VECTOR_H

#include <string>

template <class T> class Vector {
public:
    Vector();
    ~Vector();
    void add(T value);
    void clear();
    T get(int index) const;
    void insert(int index, T value);
    bool isEmpty() const;
    void remove(int index);
    void set(int index, T value);
    int size() const;
    std::string toString() const;
    Vector<T> subList(int start, int length) const;

    T& operator [](int index);
    void operator +=(T value);

    friend Vector<T> operator +(Vector<T>& input1, Vector<T>& input2) {
        Vector<T> result;
        for (int i = 0; i < input1.size(); i++) result.add(input1[i]);
        for (int i = 0; i < input2.size(); i++) result.add(input2[i]);
        return result;
    }
    friend std::ostream& operator <<(std::ostream& out, Vector<T>& v) {
        for (int i = 0; i < v.size(); v++) out << v[i];
        return out;
    }
    friend std::istream& operator >>(std::istream& in, Vector<T>& v) {
        T value;
        in >> value;
        v.add(value);
        return in;
    }

private:
    int mysize;
    int capacity;
    T* elements;
    void checkResize();
    void checkRange(int index, int min, int max) const;
};

#include "vector.cpp"

#endif // VECTOR_H
