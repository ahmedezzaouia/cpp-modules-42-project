
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	*buro = new Bureaucrat("Ahmed", 40);
	Form		*from_one = new Form("Form__one", 85, 110);
	Form		*from_two = new Form("Form__two", 20, 35);

	std::cout << buro->getName() << " and " << from_one->getname() << "." << std::endl;
	try
	{
		std::cout << "************** try to Signing *************** " << from_one->getname() << "." << std::endl << std::endl;
		buro->signForm(*from_one);
		std::cout << "************** try to ReSigning *************** " << from_one->getname() << "."<< std::endl << std::endl;
		buro->signForm(*from_one);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << buro->getName() << " and " << from_two->getname() << "." << std::endl;
	try
	{
		std::cout << "************** try to Signing *************** " << from_two->getname() << "." << std::endl << std::endl;
		buro->signForm(*from_two);
		std::cout << "************** try to ReSigning *************** " << from_two->getname() << "." << std::endl << std::endl;
		buro->signForm(*from_two);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	delete buro; delete from_one; delete from_two;
}
