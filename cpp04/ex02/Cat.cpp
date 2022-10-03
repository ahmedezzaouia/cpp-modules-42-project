#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() {
	this->type = "Cat";
	std::cout << "Cat Default constructor" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat& cat) {
	*this = cat;
	std::cout << "Cat Copy constructor" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat Destructor" << std::endl;
	delete this->brain;
}

void Cat::makeSound() {
	std::cout << "Meow! Meow! Meow!" << std::endl;
}

Brain*  Cat::getBrain()
{
	return (this->brain);
}