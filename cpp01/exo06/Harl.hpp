#ifndef HARL_HPP
#define HARL_HPP

#include <string>
using namespace std;

class Harl
{
	private:
		void debug();
		void info();
		void warning();
		void error();

	public:
		void complain(string level);
};

#endif