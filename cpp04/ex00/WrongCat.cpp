
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat() {
	this->type = "WrongCat";

	std::cout << "WrongCat Default constructor" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& wcat):WrongAnimal(wcat) {
	std::cout << "WrongCat Copy constructor" << std::endl;
}

void WrongCat::makeSound() {
	std::cout << "Meow! Meow! Meow!" << std::endl;
}