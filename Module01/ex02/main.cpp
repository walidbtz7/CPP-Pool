#include <iostream>

int main()
{
    std::string brain = "HI THIS IS BRAIN";

    std::string *stringPTR = &brain;

    std::string& stringREF = brain;

    std::cout << "Brain Adress is "<< &brain << std::endl;

     std::cout << "stringPTR Adress is "<< stringPTR << std::endl;

     std::cout << "stringREF Adress is "<< &stringREF << std::endl;

     std::cout << "Brain value is \""<< brain << "\""<< std::endl;

     std::cout << "stringPTR value is \""<< *stringPTR << "\""<< std::endl;

     std::cout << "stringREF value is \""<< stringREF << "\""<< std::endl;
}