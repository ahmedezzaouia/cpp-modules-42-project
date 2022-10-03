#include "Animal.hpp"


Animal::Animal():type("Animal") {

	std::cout << "Animal Default constructor" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal Destructor" << std::endl;
}

Animal::Animal(const Animal& animal) {
	*this = animal;
	std::cout << "Animal Copy constructor" << std::endl;
}


std::string Animal::getType() {
	return this->type;
}

Animal& Animal::operator=(const Animal& animal) {
	this->type = animal.type;
	std::cout << "Animal copy Assignment operator" << std::endl;
	return *this;
}

void Animal::makeSound(){
	std::cout << "** Animal Default sound **" << std::endl;
}
