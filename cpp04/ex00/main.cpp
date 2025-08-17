#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	//---------------------------WRONG----------

	const WrongAnimal *wrong = new WrongAnimal();
	const WrongAnimal *c = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << c->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();
	wrong->makeSound();
	c->makeSound();

	delete meta;
	delete wrong;
	delete j;
	delete i;
	delete c;

	return 0;
}