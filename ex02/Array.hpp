#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template<typename T>
class Array
{
    private:
        T *elements;
        unsigned int t_size;
    public :
    Array() : elements(NULL), t_size(0)
    {}
    Array(unsigned int n) : t_size(n)
    {
        elements = new T[n]();
    }
    ~Array()
    {
        delete[] elements;
    }
    Array(const Array &other) : t_size(other.t_size)
    {
        elements = new T[other.t_size];
        int i =0;
        while(i < t_size)
        {
            elements[i] = other.elements[i];
            i++;
        }
    }
    Array &operator=(const Array &other)
    {
        if (this == &other)
            return *this;
        delete[] elements;
        t_size = other.t_size;
        elements = new T[other.t_size];
        int i = 0;
        while(i < t_size)
        {
            elements[i] = other.elements[i];
            i++;
        }
        return *this;
    }
    T &operator[](unsigned int index)
    {
        if (index >= t_size || index < 0)
            throw std::out_of_range("Index out of bounds");
        return elements[index];
    }
    const T &operator[](unsigned int index) const
    {
        if (index >= t_size || index < 0)
            throw std::out_of_range("Index out of bounds");
        return elements[index];
    }
    unsigned int size() const
    {
        return t_size;
    }
};
#endif 