#include "Harl.hpp"


int main(int argc, char **argv)
{
    if(argc > 1)
    {
        Harl harl;

        harl.complain(argv[1]);
    }
    else
        std::cout << "missing argments" << std::endl;
}