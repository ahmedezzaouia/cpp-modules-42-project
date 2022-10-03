#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("Animal") {
	std::cout << "WrongAnimal Default constructor" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wAnimal) {
	*this = wAnimal;
	std::cout << "WrongAnimal Copy constructor" << std::endl;
}


WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wAnimal) {
	this->type = wAnimal.type;
	std::cout << "WrongAnimal Assignment operator" << std::endl;
	return *this;
}

void WrongAnimal::makeSound() {
	std::cout << "** WrongAnimal Default sound **" << std::endl;
}

std::string WrongAnimal::getType() {
	return this->type;
}