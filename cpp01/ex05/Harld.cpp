#include "Harl.hpp"
#include <iostream>

void Harl::debug() {
    cout << "DEBUG " << endl;
    cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << endl;
}

void Harl::info() {
    cout << "INFO " << endl;
    cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger!" << endl;
}

void Harl::warning() {
    cout <<  "WARNING " << endl;
    cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years!" << endl;
}

void Harl::error() {
    cout << "ERROR " << endl;
    cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void Harl::complain(string level)
{
	string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*message[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*message[i])();
			return ;
		}
	}
}