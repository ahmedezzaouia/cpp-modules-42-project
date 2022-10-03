
#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->type = "WrongCat";

	std::cout << "WrongCat Default constructor" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) {
	*this = other;

	std::cout << "WrongCat Copy constructor" << std::endl;
}

void WrongCat::makeSound() {
	std::cout << "Meow! Meow! Meow!" << std::endl;
}