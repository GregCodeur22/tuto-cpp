#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat() : Animal("Cat")
		{
			std::cout << "Cat created " << std::endl;
		}

		~Cat()
		{
			std::cout << "Cat destroyed " << std::endl;
		}

	virtual void makeSound() const
		{
			std::cout << "Miaou Miaou" << std::endl;
		}
};

#endif