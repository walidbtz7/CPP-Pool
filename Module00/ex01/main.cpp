#include "PhoneBook.hpp"

int main()
{
	PhoneBook PhoneBook;
	std::string	commande;
	int index;

	index = 0;
	while(commande != "EXIT")
	{
		std::cout << ">> ";
		getline(std::cin, commande);
		if(std::cin.eof())
			commande = "EXIT";
		if (commande == "ADD")
		{
			std::cout << "  - New Contact:" << std::endl;
			PhoneBook.SetContact(index);
			index += ((index < 7) * 1) + ((index >= 7) * (-7));
		}
		else if (commande == "SEARCH")
		{
			PhoneBook.Search(index);
		}
		else if(commande != "EXIT")
			std::cout << "  - The program only accepts ADD, SEARCH and EXIT" << std::endl;
	}
}
