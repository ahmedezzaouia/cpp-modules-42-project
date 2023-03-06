#include "ShrubberyCreationForm.hpp"
#include <fstream> 


ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :AForm("ShrubberyCreationForm", 145, 137){
	this->target = target;

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{ 
    std::cout << this->getname() << " destructor called"<< std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &pf): AForm(pf)
{
    *this =  pf;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &pf)
{
	this->setName(pf.getname());
	this->setSign(pf.getsign());
	this->setGradeToSign(pf.getgradetoSign());
	this->setGradeToExecute(pf.getgradetoExecute());
	this->target = pf.target;
	return *this;
}


void	ShrubberyCreationForm::action() const
{

std::ofstream file((this->target + "_shrubbery").c_str());

    if (file.is_open())
    {
        file << "    _\\/_\n"
                "     /o\\\\\n"
                "    /_o_\\\\\n"
                "   /\\_/\\_\\\\\n"
                "  /\\     /\\\n"
                "  \\/\\___/\\/\n"
                "       /\\\n"
                "      /  \\\n"
                "     /_()_\\\n";
        file.close();
        std::cout << "File created: " << target << "_shrubbery" << std::endl;
    }
    else
    {
        std::cout << "Failed to create file." << std::endl;
    }
}