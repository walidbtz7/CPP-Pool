#include "replace.hpp"

void str_replace(std::string &str, std::string target, std::string replace)
{
    if (str.find(target) != std::string::npos) 
    {
		//need to add some magic here;
    }
}

int main(int argc, char **argv)
{
	std::string strInput;
	std::string filename;
	if(argc == 4)
	{
		std::ifstream inf( argv[1] );
		if (!inf)
		{
			std::cerr << "Uh oh, " << argv[1] << " could not be opened for reading!\n";
			return (0);
		}
		if(!argv[2][0])
			return (0);
		std::ofstream outf("test.replace");
		if (!outf)
		{
			// Print an error and exit
			std::cerr << "Uh oh," << argv[1] << " could not be opened for writing!\n";
			return (0);
		}
		while (!inf.eof())
		{
        	std::getline(inf, strInput);
			str_replace(strInput, argv[2], argv[3]);
			outf << strInput << std::endl;
		}
		return (0);
	}
}