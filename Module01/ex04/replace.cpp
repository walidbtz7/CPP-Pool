#include "replace.hpp"

void str_replace(std::string &str, std::string target, std::string replace)
{
    if (str.find(target) != std::string::npos) 
    {
		int pos = str.find(target);
		str.erase(pos, target.length());
		str.insert(pos, replace);
    }
}

void	ft_replace(std::string file, std::ifstream &fd, std::string target, std::string replace)
{
	std::string strInput;
	std::string filename;

	filename = (std::string) file +(std::string)  ".replace";
	std::ofstream outf(filename);
	if (!outf)
	{
		std::cerr << "Uh oh," << file << " could not be opened for writing!\n";
		return ;
	}
	while (!fd.eof())
	{
		std::getline(fd, strInput);
		str_replace(strInput, target, replace);
		outf << strInput << std::endl;
	}
}