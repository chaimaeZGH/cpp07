#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T,typename F>
void iter(T *array, int length, F func)
{
    int i =0;
    while(i < length)
        func(array[i++]);
}

template <typename T>
void prtt(T n)
{
    std::cout << n << std::endl;
}

#endif