#include "Dog.hpp"
#include "Brain.hpp"


Dog::Dog() {
	this->type = "Dog";
	std::cout << "Dog Default constructor" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog& dog) {
	*this = dog;
	std::cout << "Dog Copy constructor" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog Destructor" << std::endl;
	delete this->brain;
}

void Dog::makeSound() {
	std::cout << "Bark! Bark! Bark!" << std::endl;
}
Brain*  Dog::getBrain()
{
	return (this->brain);
}