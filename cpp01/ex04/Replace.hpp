#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <string>

class Replace
{
	private:
		std::string filename;
		std::string s1;
		std::string s2;
		std::string readFile();
		std::string ft_replace(std::string &content);
		bool writeFile(std::string &content);
	
	public:
		Replace(const std::string &filename, const std::string &s1, const std::string &s2);
		bool process();
};

#endif