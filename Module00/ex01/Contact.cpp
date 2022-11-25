#include "Contact.hpp"

std::string Contact::GetFistName(int max)
{
    if(_firstName.length() > 10 && max != 0)
        return _firstName.substr(0 , 9) + '.';
    return _firstName;
}

std::string Contact::GetLastName(int max)
{
  if(_lastName.length() > 10 && max != 0)
        return _lastName.substr(0 , 9) + '.';
    return _lastName;
}

std::string Contact::GetNickName(int max)
{
  if(_nickName.length() > 10 && max != 0)
        return _nickName.substr(0 , 9) + '.';
    return _nickName;
}

std::string Contact::GetPhoneNumber()
{
    return _phoneNumber;
}

std::string Contact::GetSecret()
{
    return _secret;
}

void Contact::SetFistName(std::string firstName)
{
    this->_firstName = firstName;
}

void Contact::SetLastName(std::string lastName)
{
    this->_lastName = lastName;
}

void Contact::SetNickName(std::string nickName)
{
    this->_nickName = nickName;
}

void Contact::SetPhoneNumber(std::string phoneNumber)
{
    this->_phoneNumber = phoneNumber;
}

void Contact::SetSecret(std::string secret)
{
    this->_secret = secret;
}

void Contact::show()
{
    std::cout << "Contact" << std::endl;
    std::cout << "\tFirst name is " << this->_firstName << std::endl;
    std::cout << "\tLast name is " << this->_lastName << std::endl;
    std::cout << "\tNick name is " << this->_nickName << std::endl;
    std::cout << "\tPhone number is " << this->_phoneNumber << std::endl;
    std::cout << "\tSecret is " << this->_secret << std::endl;
}
