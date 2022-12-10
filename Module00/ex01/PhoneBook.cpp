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

std::string getInput(int  *status, std::string input)
{
    if(*status)
    {
        std::cout << "\t" << input;
        getline(std::cin, input);
        if(std::cin.eof())
            exit(1);
        else if (input.empty())
        {
            std::cerr << "\tError! contact can’t have empty fields." << std::endl;
            *status = 0;
            input.clear();
        }
    }
    else
        input.clear();
    return (input);
}

void    PhoneBook::SetContact(int *index, int *length)
{
    int         status = 1;
    Contact     Contact;
    std::string firstName = "Enter First name: ";
    std::string lastName =  "Enter Last name: ";
    std::string nickName = "Enter Nick name: ";
    std::string phoneNumber = "Enter Phone Number: ";
    std::string secret = "Enter Secret: ";

    firstName = getInput(&status, firstName);
    Contact.SetFistName(firstName);
    lastName = getInput(&status, lastName);
    Contact.SetLastName(lastName);
    nickName = getInput(&status, nickName);
    Contact.SetNickName(nickName);
    phoneNumber = getInput(&status, phoneNumber);
    Contact.SetPhoneNumber(phoneNumber);
    secret = getInput(&status, secret);
    Contact.SetSecret(secret);
    if(status)
    {
        this->_Contacts[*index] = Contact;
        std::cout << "  -Contact Saved successfully" << std::endl;
   		*index += ((*index < 7) * 1) + ((*index >= 7) * (-7));
        if(*length >= 7)
            *length = 7;
        else
            (*length)++;
    }
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