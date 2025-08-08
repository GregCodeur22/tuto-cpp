#include "Harl.hpp"
#include <iostream>

using namespace std;

int main(int ac, char **av)
{
	if (ac != 2)
	{
		cout << "missing index " << endl;
		return (1);
	}

	string level = av[1];
	Harl harl;
	int lvl = -1;

	if (level == "DEBUG") lvl = 0;
	else if (level == "INFO") lvl = 1;
	else if (level == "WARNING") lvl = 2;
	else if (level == "ERROR") lvl = 3;

	switch(lvl)
	{
		case 0:
			harl.complain("DEBUG");

		case 1:
			harl.complain("INFO");

		case 2:
			harl.complain("WARNING");

		case 3:
			harl.complain("ERROR");
			break;
			
		default:
			cout << "unknown" << endl;
	}
}