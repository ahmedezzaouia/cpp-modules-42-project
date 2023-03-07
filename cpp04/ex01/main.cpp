#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"



int main() {
	Animal *animals[100];

	for (int i = 0; i < 100; i++) {
		if (i < 100 / 2) {
			animals[i] = new Cat();
		} else {
			animals[i] = new Dog();
		}
	}

	std::cout << std::endl;

	for (int i = 0; i < 100; i++) {
		animals[i]->makeSound();
	}

	std::cout << std::endl;

	std::cout << "----------------- Clean All  ----------------------" <<std::endl;

	for (int i = 0; i < 100; i++) {
		delete animals[i];
	}
}