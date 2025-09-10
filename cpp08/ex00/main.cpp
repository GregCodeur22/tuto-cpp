#include "Easyfind.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <list>

int main()
{
	try
	{
		// Vector
		std::vector<int> v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);
		v.push_back(5);

		// Deque
		std::deque<int> d;
		d.push_back(10);
		d.push_back(20);
		d.push_back(30);

		// List
		std::list<int> l;
		l.push_back(100);
		l.push_back(200);
		l.push_back(300);

		std::cout << "Found in vector: " << *easyfind(v, 1) << std::endl;
		std::cout << "Found in deque: " << *easyfind(d, 20) << std::endl;
		std::cout << "Found in list: " << *easyfind(l, 200) << std::endl;

		// Test valeur absente
		easyfind(v, 42);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
