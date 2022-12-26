#include "Iter.hpp"

void print(int  const &number)
{
    std::cout << number << std::endl;
}

void printChar(char  const &c)
{
    std::cout << c << std::endl;
}

void printFloat(float  const &fl)
{
    std::cout << fl << std::endl;
}

int main()
{
    std::cout << "Integers:" << std::endl;
    int array[4] = {7, 8, 9, 10};
    iter(array, 4, print);

    std::cout << "caracters:" << std::endl;
    char carray[4] = {'a', 'b', 'c', 'd'};
    iter(carray, 4, printChar);

    std::cout << "Floats:" << std::endl;
    float farray[4] = {7.15, 8.4, 9.1, 10.4};
    iter(farray, 4, printFloat);
    return (0);
}