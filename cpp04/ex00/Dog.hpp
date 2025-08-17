#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog() : Animal("Dog")
		{
			cout << "Dog created" << endl;
		}

		~Dog()
		{
			cout << "Dog destroyed " << endl;
		}

		void makeSound() const
		{
			cout << "Woof Woof" << endl;
		}
};

#endif