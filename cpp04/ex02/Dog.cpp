#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
		std::cout << "Dog created" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
		*this = other;
		std::cout << "Dog copy constructed" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
		if (this != &other) {
				Animal::operator=(other);
		}
		std::cout << "Dog assigned" << std::endl;
		return *this;
}

Dog::~Dog() {
		std::cout << "Dog destroyed" << std::endl;
}

void Dog::makeSound() const {
		std::cout << "wouaf" << std::endl;
}
