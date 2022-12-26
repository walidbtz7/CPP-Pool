#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP
#include <iostream>
#include <cstdint>
#include <string>

class Data {
    public:
        Data();
        Data(const Data& src);
        ~Data();
        Data& operator=(const Data& other);
        unsigned int getnum() const;
    private:
        unsigned int num;
};

std::ostream & operator<<(std::ostream & o, Data const & rhs);
uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
#endif