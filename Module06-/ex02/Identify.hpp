#ifndef IDENTIFY_HPP
#define IDENTIFY_HPP
#include <iostream>

class Base {
    public:
        virtual ~Base() {};
        static Base * generate(void);
        static void identify(Base* p);
        static void identify(Base& p);
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif