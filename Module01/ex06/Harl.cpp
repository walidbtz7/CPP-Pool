#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
    int i;
    void (Harl :: *fun[])(void ) = {
        &Harl::debug,
        &Harl:: info,
        &Harl :: warning,
        &Harl :: error
    };
    std::string levels[5] = { "DEBUG", "INFO","WARNING", "ERROR", level};

    i = 0;
    while(level.compare(levels[i]))
       i++;
    switch (i) {
        case 0:
            (this->*fun[i++])();
        case 1:
            (this->*fun[i++])();
        case 2:
            (this->*fun[i++])();
        case 3:
            (this->*fun[i++])();
            break;
        default :
            std::cerr << "Probably complaining about insignificant problems" << std::endl;
            break;
    }
}