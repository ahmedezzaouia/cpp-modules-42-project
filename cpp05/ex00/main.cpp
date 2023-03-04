
#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	a("ahmed", 50);
	Bureaucrat	*b;
	try
	{
		b = new Bureaucrat("amine", 120);
		b->incrementGrade(a.getGrade());
		a.setGrade(200);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		std::cout << a;
		std::cout << *b;
		delete b;
	}

}
