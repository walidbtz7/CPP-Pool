#include "Serialization.hpp"

Data::Data()
{
    std::cout << "Data constructor" << std::endl;
    this->num = 100;
}

Data::Data(const Data& src)
{
    std::cout << "Data copy constructor" << std::endl;
    this->num = src.num;
}

Data::~Data()
{
    std::cout << "Data destructor" << std::endl;
}

Data& Data::operator=(const Data& other)
{
    std::cout << "Data operator=" << std::endl;
    this->num = other.num;
    return *this;
}

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}
unsigned int Data::getnum() const
{
    return num;
};

std::ostream & operator<<(std::ostream & o, Data const & rhs)
{
    o << rhs.getnum();
    return o;
}