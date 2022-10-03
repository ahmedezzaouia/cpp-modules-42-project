#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	public:
		Cat();
		Cat(const Cat& cat);
		~Cat();
		void makeSound();
		Brain *getBrain();
	private:
		Brain *brain;
};

#endif