#include "Dog.hpp"
#include "Animal.hpp"


Dog::Dog() {
	this->type = "Dog";
	std::cout << "Dog Default constructor" << std::endl;
}

Dog::Dog(const Dog& dog):Animal(dog) {
	std::cout << "Dog Copy constructor" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog Destructor" << std::endl;
}

void Dog::makeSound() {
	std::cout << "Bark! Bark! Bark!" << std::endl;
}