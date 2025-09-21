#include "Harl.hpp"
#include <iostream>

void Harl::debug()
{
		std::cout << "[ DEBUG ]" << std::endl;
		std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
		std::cout << "[ INFO ]" << std::endl;
		std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger!" << std::endl;
}

void Harl::warning()
{
		std::cout << "[ WARNING ]" << std::endl;
		std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years!" << std::endl;
}

void Harl::error()
{
		std::cout << "[ ERROR ]" << std::endl;
		std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	int lvl = -1;

	if (level == "DEBUG") lvl = 0;
	else if (level == "INFO") lvl = 1;
	else if (level == "WARNING") lvl = 2;
	else if (level == "ERROR") lvl = 3;

	switch(lvl) {
			case 0:
					debug();
			case 1:
					info();
			case 2:
					warning();
			case 3:
					error();
					break;
			default:
					std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

