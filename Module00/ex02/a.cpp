#include <ctime>
#include <iostream>


int main()
{
    std::time_t  t = std::time(0);
    std::cout << t << '\n';
    std::tm* now = std::localtime(&t);
    std::cout << now->tm_year + 1900 << now->tm_mon << now->tm_mday << '\n';
}