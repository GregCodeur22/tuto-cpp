#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat() : WrongAnimal("Cat")
		{
			cout << "Cat created" << endl;
		}

		~WrongCat()
		{
			cout << "Cat destroyed " << endl; 
		}

		void makeSound() const
		{
			cout << "Miaou Miaou" << endl;
		}
};

#endif