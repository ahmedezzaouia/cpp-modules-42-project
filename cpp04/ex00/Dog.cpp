#include "Dog.hpp"


Dog::Dog() {
	this->type = "Dog";
	std::cout << "Dog Default constructor" << std::endl;
}

Dog::Dog(const Dog& dog) {
	*this = dog;
	std::cout << "Dog Copy constructor" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog Destructor" << std::endl;
}

void Dog::makeSound() {
	std::cout << "Bark! Bark! Bark!" << std::endl;
}