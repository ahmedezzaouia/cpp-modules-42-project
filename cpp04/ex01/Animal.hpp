#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {

	protected:
		std::string type;

	public:
		Animal();
		Animal(const Animal& Animal);
		virtual ~Animal();
		Animal& operator=(const Animal& Animal);
		std::string getType();
		virtual void makeSound();
};

#endif