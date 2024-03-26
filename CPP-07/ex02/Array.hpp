#pragma once
# define ARRAY_HPP

#include <iostream>
#include <cstdlib>

template<typename T>
class Array {
    private:
        T* _array;
        unsigned int _size;
        
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &other);
        ~Array();
        
        Array<T> operator=(const Array<T> &other);
        T& operator[](unsigned int index);

        unsigned int size() const;
};

template<typename T>
Array<T>::Array() : _array(NULL), _size(0) {}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n) {
    _array = new T[_size];
}

template<typename T>
Array<T>::Array(const Array<T>& other) : _size(other._size) {
    _array = new T[_size];
    for (unsigned int i = 0; i < _size; ++i) {
        _array[i] = other._array[i];
    }
}

template<typename T>
Array<T>::~Array() {
    delete[] _array;
}

template<typename T>
Array<T> Array<T>::operator=(const Array<T> &other) {
    if (this != &other) {
        delete[] _array;
        _size = other._size;
        _array = new T[_size];
        for (unsigned int i = 0; i < _size; ++i) {
            _array[i] = other._array[i];
        }
    }
    return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int index) {
    if (index >= _size) {
        throw std::out_of_range("Array<T>::operator: Index out of bounds");
    }
    return _array[index];
}

template<typename T>
unsigned int Array<T>::size() const {
    return _size;
}
