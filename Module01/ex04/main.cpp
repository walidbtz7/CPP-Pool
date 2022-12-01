#include "replace.hpp"

int main(int argc, char **argv)
{	
	if(argc == 4)
	{
		if(((std::string) argv[2]).empty())
		{
			std::cerr << "Uh oh, " << argv[1] << "couldn't replace a empty string!\n";
			return (0);
		}
		std::ifstream inf( argv[1] );
		if (!inf)
		{
			std::cerr << "Uh oh, " << argv[1] << " could n	ot be opened for reading!\n";
			return (0);
		}
	
		ft_replace(argv[1], inf, argv[2], argv[3]);
		return (0);
	}
	else
		std::cout << "Error, missing parameter" << std::endl;
}

