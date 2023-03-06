#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :AForm("PresidentialPardonForm", 25, 5){
	this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{ 
    std::cout << this->getname() << " destructor called"<< std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &pf) : AForm(pf)
{
    *this =  pf;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &pf)
{
	this->setName(pf.getname());
	this->setSign(pf.getsign());
	this->setGradeToSign(pf.getgradetoSign());
	this->setGradeToExecute(pf.getgradetoExecute());
	this->target = pf.target;
	return *this;
}


void	PresidentialPardonForm::action() const
{
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
