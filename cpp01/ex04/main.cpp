#include <iostream>
#include <string>
#include "Replace.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "<prog> <s1> <s2>" << std::endl;
		return 1;
	}

	Replace replacer(av[1], av[2], av[3]);
	if (!replacer.process())
	{
		std::cerr << "Failed " << std::endl;
		return 1;
	}

	return (0);
}