#include <iostream>
#include <cstring>
#include <cctype>

int main(int argc, char **argv)
{
    int j;

    if(argc > 1)
    {
        for(int i = 1; i < argc; i++)
        {
            j = 0;
            while (argv[i][j])
            {
                argv[i][j] = toupper(argv[i][j]);
                j++;
            }
            std::cout << argv[i];
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}