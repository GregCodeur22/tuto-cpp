#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat() : Animal("Cat")
		{
			cout << "Cat created" << endl;
		}

		~Cat()
		{
			cout << "Cat destroyed " << endl;
		}

		void makeSound() const
		{
			cout << "Miaou Miaou" << endl;
		}
};

#endif