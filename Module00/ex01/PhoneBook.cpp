#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    std::cout << "- Welcome To Your PhoneBook" << std::endl;
	std::cout << "\t Use 'ADD'   : To save A new Book" << std::endl;
	std::cout << "\t Use 'SEARCH': display a specific contact" << std::endl;
	std::cout << "\t Use 'EXIT' To quits ;)" << std::endl;
}

PhoneBook::~PhoneBook()
{
   	std::cout << "\nExit" << std::endl;

}

Contact PhoneBook::GetContact(int index)
{
    return _Contacts[index];
}

void    PhoneBook::SetContact(int index)
{
    Contact Contact;
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string secret;

    std::cout << "\t Enter First name: ";
    getline(std::cin, firstName);
    Contact.SetFistName(firstName);
    std::cout << "\t Enter Last name: ";
    getline(std::cin, lastName);
    Contact.SetLastName(lastName);
    std::cout << "\t Enter Nick name: ";
    getline(std::cin, nickName);
    Contact.SetNickName(nickName);
    std::cout << "\t Enter Phone Number: ";
    getline(std::cin, phoneNumber);
    Contact.SetPhoneNumber(phoneNumber);
    std::cout << "\t Enter Secret: ";
    getline(std::cin, secret);
    Contact.SetSecret(secret);
    std::cout << "  -Contact Saved successfully" << std::endl;
    this->_Contacts[index] = Contact;
}

void     PhoneBook::showContact(int index, int length)
{
    if(index < 0 || index >=  length)
        std::cout << "\tIndex Not Found :(" << std::endl;
    else
    {
        std::cout << "\t First Name is:" << GetContact(index).GetFistName(0) << std::endl;
        std::cout << "\t Last Name is :" << GetContact(index).GetLastName(0) << std::endl;
        std::cout << "\t Nick Name is :" << GetContact(index).GetNickName(0) << std::endl;
        std::cout << "\t Phone Number is :" << GetContact(index).GetPhoneNumber() << std::endl;
        std::cout << "\t Secret is :" << GetContact(index).GetSecret() << std::endl;
    }
}

void    PhoneBook::Search(int length)
{
    int i; 
    int index;

    Contact Contact;
    index = 0;
    i = 0;
    std::cout << "\t----------" << "-------------" << "-----------" << "-------------"<< std::endl;
    std::cout << "\t|  index  " << "|First Name" << "|Last Name " << "|Nick Name |"<< std::endl;
    std::cout << "\t----------" << "-------------" << "-----------" << "-------------"<< std::endl;
    
    while (i < length)
    {
        Contact = GetContact(i);
        std::cout << "\t|" << i + 1 << std::setw(9); 
        std::cout << "|" << Contact.GetFistName(10) << std::setw(11 - Contact.GetFistName(10).length()); 
        std::cout << "|" << Contact.GetLastName(10) << std::setw(11 - Contact.GetLastName(10).length());  
        std::cout << "|" << Contact.GetNickName(10) << std::setw(11 - Contact.GetNickName(10).length()) << "|" << std::endl ; 
        i++;
    }
	std::cout << "\n\t- Select A Contact By Index >> ";
    std::cin >> index;
    std::cin.ignore();
    std::cin.clear();
    showContact((index - 1), length);
}