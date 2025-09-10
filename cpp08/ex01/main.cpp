#include "Span.hpp"
#include <iostream>
#include <vector>
#include <deque>

int main()
{
	try
	{
		Span sp(10);

		// Ajouter des nombres individuellement
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Shortest span: " << sp.shortesSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;

		// Ajouter une plage de nombres via vector
		std::vector<int> v;
		v.push_back(20);
		v.push_back(25);
		v.push_back(30);
		sp.addMoreNumber(v.begin(), v.end());

		// Ajouter une plage de nombres via deque
		std::deque<int> d;
		d.push_back(1);
		d.push_back(50);
		sp.addMoreNumber(d.begin(), d.end());

		std::cout << "After adding ranges:" << std::endl;
		std::cout << "Shortest span: " << sp.shortesSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;

		// Essai d'ajout au-delà de la capacité
		sp.addNumber(100); // Déclenchera une exception
	}
	catch (const std::length_error &e)
	{
		std::cerr << "Length error: " << e.what() << std::endl;
	}
	catch (const std::runtime_error &e)
	{
		std::cerr << "Runtime error: " << e.what() << std::endl;
	}

	return 0;
}
