#include "ShrubberyCreationForm.hpp"
#include <fstream> 


ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :AForm("ShrubberyCreationForm", 145, 137){
	this->target = target;
    std::cout << this->getname() << " construct called"<< std::endl;

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{ 
    std::cout << this->getname() << " destructor called"<< std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &pf): AForm(pf)
{
    std::cout << this->getname() << " copied with copy constuctor." << std::endl;
    *this =  pf;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &pf)
{
    std::cout << this->getname() << " copied with copy assignment operator." << std::endl;
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