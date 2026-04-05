#include "Array.hpp"

int main()
{
    // Test 1: Create and fill array
    Array<int> numbers(5);
    for (unsigned int i = 0; i < numbers.size(); i++)
        numbers[i] = i * 10;
    
    // Test 2: Print array
    std::cout << "Array size: " << numbers.size() << std::endl;
    for (unsigned int i = 0; i < numbers.size(); i++)
        std::cout << numbers[i] << " ";
    std::cout << std::endl;
    
    // Test 3: Copy constructor
    Array<int> copy(numbers);
    copy[0] = 999;
    std::cout << "Original[0]: " << numbers[0] << std::endl;
    std::cout << "Copy[0]: " << copy[0] << std::endl;

    // Test 4: Return the size
    std::cout<< "Original size: " <<numbers.size()<<std::endl;
    std::cout<< "Copy size: "<<copy.size()<<std::endl;
    
    // Test 5: Exception handling
    try
    {
        numbers[10] = 42;
    }
    catch (const std::out_of_range& e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    
    return 0;
}