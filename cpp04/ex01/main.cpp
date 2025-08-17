#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << "Type of j:" << j->getType() << std::endl;
	std::cout << "Type of i:" << i->getType() << std::endl;

	j->makeSound();
	i->makeSound();

	delete j;
	delete i;

	std::cout << "--------------------------------------" << std::endl;

	const int size = 10;
	Animal *animal[size];

	for (int i = 0; i < size; ++i)
	{
		if (i < size / 2)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
	}

	for(int i = 0; i < size; ++i)
	{
		std::cout << "Animal " << "( "<<i <<  " ) is a " << animal[i]->getType() << std::endl;
		animal[i]->makeSound();
	}
	
	for(int i = 0; i < size; ++i)
	{
		delete animal[i];
	}

	return (0);
}