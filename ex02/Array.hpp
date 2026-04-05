#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template<typename T>
class Array
{
    private:
        T *elements;
        unsigned int ssize;
    public :
    Array() : elements(NULL), ssize(0)
    {}
    Array(unsigned int n) : ssize(n)
    {
        elements = new T[n]();
    }

    ~Array()
    {
        delete[] elements;
    }

    Array(const Array &other) : ssize(other.ssize)
    {
        elements = new T[other.ssize];
        for (unsigned int i = 0; i < ssize; i++)
            elements[i] = other.elements[i];
    }

    Array &operator=(const Array &other)
    {
        if (this == &other)
            return *this;
        delete[] elements;
        ssize = other.ssize;
        elements = new T[other.ssize];
        for (unsigned int i = 0; i < ssize; i++)
            elements[i] = other.elements[i];
        return *this;
    }

    T &operator[](unsigned int index)
    {
        if (index >= ssize || index < 0)
            throw std::out_of_range("Index out of bounds");
        return elements[index];
    }

    const T &operator[](unsigned int index) const
    {
        if (index >= ssize || index < 0)
            throw std::out_of_range("Index out of bounds");
        return elements[index];
    }

    unsigned int size() const
    {
        return ssize;
    }
};

#endif