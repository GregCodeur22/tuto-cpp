#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	const int size = 6;
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

	std::cout << "--------------------------------------" << std::endl;

	Dog d;
	d.getBrain()->setIdea(0, "Manger");
	d.getBrain()->setIdea(99, "Dormir");
	d.getBrain()->setIdea(150, "Trop loin!");
	d.getBrain()->setIdea(-5, "Impossible");

	std::cout << "Idea[0]: " << d.getBrain()->getIdea(0) << std::endl;
	std::cout << "Idea[99]: " << d.getBrain()->getIdea(99) << std::endl;
	std::cout << "Idea[150]: " << d.getBrain()->getIdea(150) << std::endl;
	std::cout << "Idea[-5]: " << d.getBrain()->getIdea(-5) << std::endl;

		std::cout << "--------------------------------------" << std::endl;


	Dog dog1;
	dog1.getBrain()->setIdea(0, "Chasser");

	Dog dog2 = dog1;  // copie profonde

	dog1.getBrain()->setIdea(0, "Manger");

	std::cout << "Dog1: " << dog1.getBrain()->getIdea(0) << std::endl; // Manger
	std::cout << "Dog2: " << dog2.getBrain()->getIdea(0) << std::endl; // Chasser

	return (0);
}
