#include "Scalar.hpp"

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cout << "Error: Invalid number of arguments" << std::endl;
        return (0);
    }
    Scalar scalar(argv[1]);
    return 0;
}