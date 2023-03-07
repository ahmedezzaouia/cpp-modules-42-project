#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() {
	this->type = "Cat";
	std::cout << "Cat Default constructor" << std::endl;
}

Cat::Cat(const Cat& cat):Animal(cat){
	std::cout << "Cat Copy constructor" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat Destructor" << std::endl;
}

void Cat::makeSound() {
	std::cout << "Meow! Meow! Meow!" << std::endl;
}