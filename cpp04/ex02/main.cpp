#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{

		// Animal* test = new Animal();

    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "Type of dog: " << dog->getType() << std::endl;
    std::cout << "Type of cat: " << cat->getType() << std::endl;

    dog->makeSound();
    cat->makeSound();

    delete dog;
    delete cat;

    return 0;
}