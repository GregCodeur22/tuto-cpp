#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
		std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
		*this = other;
		std::cout << "Cat copy constructed" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
		if (this != &other) {
				Animal::operator=(other);
		}
		std::cout << "Cat assigned" << std::endl;
		return *this;
}

Cat::~Cat() {
		std::cout << "Cat destroyed" << std::endl;
}

void Cat::makeSound() const {
		std::cout << "Miaou Miaou" << std::endl;
}

class GradeTooHighException : public std::exception {
    const char* what() const throw() {
        return "Grade too high!";
    }
};