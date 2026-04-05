#include "iter.hpp"

int main()
{
    const std:: string ss[5] = {"hello", "world", "foo", "bar", "baz"};
    int arr[3]={0,1,2};
    const int adf[2]={5,6};
    iter(ss, 5, prtt<std::string>);
    iter(arr, 3, prtt<int>);
    iter(adf, 2, prtt<const int>);
    return 0;
}