#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string>

class Contact {
    public:
        std::string GetFistName(int max);
        std::string GetLastName(int max);
        std::string GetNickName(int max);
        std::string GetPhoneNumber();
        std::string GetSecret();
        void         SetFistName(std::string firstName);
        void         SetLastName(std::string lastName);
        void         SetNickName(std::string nickName);
        void         SetPhoneNumber(std::string phoneNumber);
        void         SetSecret(std::string secret);
        void         show();
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickName;
        std::string _phoneNumber;
        std::string _secret;
};

#endif