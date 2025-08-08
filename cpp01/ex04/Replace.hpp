#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <string>
using namespace std;

class Replace
{
	private:
		string filename;
		string s1;
		string s2;
		string readFile();
		string replace(string &content);
		bool writeFile(string &content);
	
	public:
		Replace(const string &filename, const string &s1, const string &s2);
		bool process();
};

#endif