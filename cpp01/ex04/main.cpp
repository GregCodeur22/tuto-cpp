#include <iostream>
#include <string>
#include "Replace.hpp"
using namespace std;

int main(int ac, char **av)
{
	if (ac != 4)
	{
		cerr << "<prog> <s1> <s2>" << endl;
		return 1;
	}

	Replace replacer(av[1], av[2], av[3]);
	if (!replacer.process())
	{
		cerr << "Failed " << endl;
		return 1;
	}

	return (0);
}