#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string type;

	public:
		Animal(const std::string& t = "Unknow") : type (t)
		{
			std::cout << "Animal " << type << "created" << std::endl;
		}

	virtual ~Animal()
		{
			std::cout << "Animal destroyed " << type << std::endl;
		}
		
	virtual void makeSound() const = 0;
		
		std::string getType() const
		{
			return type;
		}
};

#endif