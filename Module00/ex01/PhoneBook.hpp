#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "Contact.hpp"
#include <iomanip> 

class PhoneBook 
{
    public:
        PhoneBook();
        ~PhoneBook();
        void    SetContact(int *index, int *length);
        Contact GetContact(int index);
        void    Search(int length);
        void    showContact(int index, int length);
    private:
        Contact _Contacts[8];
};

#endif