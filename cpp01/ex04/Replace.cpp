#include "Replace.hpp"
#include <fstream>
#include <sstream>
#include <string>

Replace::Replace(const std::string &filename, const std::string &s1, const std::string &s2)
{
	this->filename = filename;
	this->s1 = s1;
	this->s2 = s2;
}

std::string Replace::readFile()
{
	std::ifstream file(filename.c_str());
	if (!file.is_open())
	{
		std::cerr << "Error openning file\n";
		return std::string("");
	}
	std::stringstream buffer;
	buffer << file.rdbuf();
	return (buffer.str());
}

std::string Replace::ft_replace(std::string &content)
{
	std::string result;
	size_t pos = 0;
	size_t found;

	while ((found = content.find(s1, pos)) != std::string::npos)
	{
		result += content.substr(pos, found - pos);
		result += s2;
	}
	result += content.substr(pos);
	return (result);
}

bool Replace::writeFile(std::string &content)
{
	std::ofstream outfile((filename + ".replace").c_str());
	if (!outfile.is_open())
	{
		std::cerr << "Error: Cannot open output file." << std::endl;
		return false;
	}
	outfile << content;
	return true;
}

bool Replace::process()
{
	std::string content = readFile();
	if (content.empty())
	{
		std::cerr << "Error: File is empty" << std::endl;
		return false;
	}
	std::string replaced = ft_replace(content);
	return (writeFile(replaced));
}