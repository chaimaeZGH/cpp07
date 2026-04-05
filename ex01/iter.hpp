#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T, typename F>
void iter(T arr[], int size,void (*f)(F&))
{
    int i = 0;
    while(i<size)
    {
        f(arr[i]);
        i++;
    }
}


#endif