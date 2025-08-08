#include "Replace.hpp"
#include <fstream>
#include <sstream>
#include <string>

Replace::Replace(const string &filename, const string &s1, const string &s2)
{
	this->filename = filename;
	this->s1 = s1;
	this->s2 = s2;
}

string Replace::readFile()
{
	ifstream file(filename.c_str());
	if (!file.is_open())
	{
		cerr << "Error openning file\n";
		return std::string("");
	}
	stringstream buffer;
	buffer << file.rdbuf();
	return (buffer.str());
}

string Replace::replace(string &content)
{
	string result;
	size_t pos = 0;
	size_t found;

	while ((found = content.find(s1, pos)) != string::npos)
	{
		result += content.substr(pos, found - pos);
		result += s2;
		pos = found + s1.length();
	}
	result += content.substr(pos);
	return (result);
}

bool Replace::writeFile(string &content)
{
	ofstream outfile(filename + "replace");
	if (!outfile.is_open())
	{
		cerr << "Error: Cannot open output file." << endl;
		return false;
	}
	outfile << content;
	return true;
}

bool Replace::process()
{
	string content = readFile();
	if (content.empty())
	{
		cerr << "Error: File is empty" << endl;
		return false;
	}
	string replaced = replace(content);
	return (writeFile(replaced));
}