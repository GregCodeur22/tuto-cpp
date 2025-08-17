#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog() : Animal("Dog")
		{
			std::cout << "Dog created " << std::endl;
		}

		~Dog()
		{
			std::cout << "Dog destroyed" << std::endl;
		}

	virtual void makeSound() const
		{
			std::cout << "Woof Woof" << std::endl;
		}
};

#endif