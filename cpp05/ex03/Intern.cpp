#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern()
{
    std::cout << " intern construct called"<< std::endl;
}

Intern::~Intern()
{
    std::cout <<" destuctor called"<< std::endl;
}

Intern &Intern::operator=(Intern const &intern)
{
    (void)intern;
    return (*this);
}

AForm *Intern::makeForm(std::string form, std::string target)
{
    std::string	forms[3] = {"Shrubbery" , "Presidential", "Robotomy"};
    AForm *created_form = NULL;

    for (int i = 0; i < 4; i++)
    {
        if (form == forms[i])
        {
            switch (i)
            {
                case 0:
                    std::cout << "Intern creates " << "Shrubbery" << std::endl;
                    created_form = new ShrubberyCreationForm(target);
                    break;
                case 1:
                    std::cout << "Intern creates " << "Presidential" << std::endl;
                    created_form = new PresidentialPardonForm(target);
                    break;
                case 2:
                    std::cout << "Intern creates " << "Robotomy" << std::endl;
                    created_form = new RobotomyRequestForm(target);
                    break;
                default:
                    std::cout << "Intern cannot find form." << std::endl;
                    break;
            }
            break ;
        }
        else
            {
                 std::cout << "Intern cannot find form." << std::endl;
                 break;
            }
    }
    return created_form;
}
