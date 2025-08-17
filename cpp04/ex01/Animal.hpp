#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		Animal(const std::string& type);
		Animal(const Animal& rhs);
		virtual ~Animal();

		Animal &operator=(const Animal& rhs);

		virtual void makeSound() const;
		std::string getType() const;
};


#endif