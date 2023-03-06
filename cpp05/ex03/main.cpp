
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

void	DoForm(Bureaucrat &buro, AForm &form)
{
	std::cout << buro.getName() << " and " << form.getname() << "." << std::endl;
	try
	{
		std::cout << "Signing " << buro.getName() << "." << std::endl;
		buro.signForm(form);
		std::cout << "Executing " << buro.getName() << "." << std::endl;
		buro.executeForm(form);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

int	main(void)
{
	Bureaucrat	*buro = new Bureaucrat("ahmed", 30);
	Bureaucrat	*buro1 = new Bureaucrat("amine", 90);
	Bureaucrat	*buro2 = new Bureaucrat("Nabile", 84);

	Intern	intern;

	AForm	*robotomy = new RobotomyRequestForm("contact");
	AForm	*shrubbery = intern.makeForm("Shrudsbbery", "about");
	// AForm	*president = intern.makeForm("Presidential", "home");

	(void)robotomy;
	(void)shrubbery;
	// (void)president;
	(void)buro;
	(void)buro1;
	(void)buro2;

	// DoForm(*buro, *shrubbery);
	// DoForm(*buro, *robotomy);
	// DoForm(*buro, *president);

	// DoForm(*buro1, *shrubbery);
	// DoForm(*buro1, *robotomy);
	// DoForm(*buro1, *president);

	// DoForm(*buro2, *shrubbery);
	// DoForm(*buro2, *robotomy);
	// DoForm(*buro2, *president);
}
