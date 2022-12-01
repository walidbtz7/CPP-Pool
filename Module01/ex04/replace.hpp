#ifndef REPLACE_HPP
#define REPLACE_HPP
#include <fstream>
#include <iostream>
#include <string>

void    str_replace(std::string &str, std::string target, std::string replace);
void    ft_replace(std::string file, std::ifstream &fd, std::string target, std::string replace);

#endif