#include "Serialization.hpp"

int main()
{
    Data* data = new Data();
    uintptr_t raw = serialize(data);
    std::cout << data << std::endl;
    std::cout << data->getnum() << std::endl;
    data = deserialize(raw);
    std::cout << "---- after ----\n";
    std::cout << data->getnum() << std::endl;
    std::cout << data << std::endl;
    return 0;
}