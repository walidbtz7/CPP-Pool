#include "Array.hpp"

int main()
{
    try
    {
        Array<int> a(4);
        a[0] = 1;
        a[1] = 2;
        a[2] = 3;
        a[3] = 4;
        std::cout << a[0] << std::endl;
        std::cout << a[1] << std::endl;
        std::cout << a[2] << std::endl;
        std::cout << a[3] << std::endl;

        Array<int> b = a;
        std::cout <<"Array size is "<< b.getSize() << std::endl;
        std::cout << b[8] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);

}