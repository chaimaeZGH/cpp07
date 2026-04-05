#include "iter.hpp"
template <typename T>
void prtt(const T a)
{
    std::cout<<a<<std::endl;
}

int main()
{
    const std:: string ss[5] = {"hello", "world", "foo", "bar", "baz"};
    int arr[3]={0,1,2};
    const int adf[2]={5,6};
    iter(ss, 5, prtt);
    iter(arr, 3, prtt);
    iter(adf, 2, prtt);
    return 0;
}