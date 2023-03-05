#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	*buro = new Bureaucrat("ahmed", 50);
	Form		*form = new Form("amine", 90, 100);
	Form		*form1 = new Form("nabil", 10, 20);

	delete buro; delete form; delete form1;
}
