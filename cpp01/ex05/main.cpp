#include "Harl.hpp"

int main()
{
	Harl Harlinstance;

	Harlinstance.complain("DEBUG");
	Harlinstance.complain("INFO");
	Harlinstance.complain("WARNING");
	Harlinstance.complain("ERROR");
	Harlinstance.complain("UNKNOWN");

	return (0);
}