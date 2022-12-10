#include "PhoneBook.hpp"

int main()
{
	PhoneBook PhoneBook;
	std::string	commande;
	int index;
	int	length;

	length = 0;
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
			PhoneBook.SetContact(&index, &length);
		}
		else if (commande == "SEARCH")
		{
			PhoneBook.Search(length);
		}
		else if(commande != "EXIT")
			std::cout << "  - The program only accepts ADD, SEARCH and EXIT" << std::endl;
	}
}
