#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    
	public:
		Dog();
		Dog(const Dog& other);
		~Dog();
		void makeSound();
		Brain *getBrain();
	private:
		Brain *brain;
};

#endif