#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :AForm("RobotomyRequestForm", 72, 45){
	this->target = target;

}

RobotomyRequestForm::~RobotomyRequestForm()
{ 
    std::cout << this->getname() << " destructor called"<< std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &pf): AForm(pf)
{
    *this =  pf;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &pf)
{
	this->setName(pf.getname());
	this->setSign(pf.getsign());
	this->setGradeToSign(pf.getgradetoSign());
	this->setGradeToExecute(pf.getgradetoExecute());
	this->target = pf.target;
	return *this;
}


void	RobotomyRequestForm::action() const
{
    std::cout << "* makes some drilling noises *";
	if (rand() % 2 == 0)
		std::cout << this->target << " has been robotomized." << std::endl;
	else
		std::cout << this->target << " robotomize is failed." << std::endl;
}