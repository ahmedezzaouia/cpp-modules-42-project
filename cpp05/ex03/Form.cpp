
#include "Bureaucrat.hpp"
#include "AForm.hpp"


AForm::AForm(std::string name, int gradetoSign, int gradetoExecute)
{
	this->name = name;
	this->sign = 0;
	this->gradeToSign = gradetoSign;
	this->gradeToExecute = gradetoExecute;
    std::cout << this->name << " construct called"<< std::endl;
}


AForm::AForm(AForm const &fr)
{
    std::cout << "From " << this->name << " copied with copy constuctor." << std::endl;
	*this = fr;
}

AForm::~AForm() { 
    std::cout << "AForm " << this->name << " destructor called" << std::endl;
}

AForm &AForm::operator=(AForm const &fr)
{
    std::cout << "AForm " << this->name << " copied with copy assignment operator." << std::endl;
	this->name = fr.name;
	this->sign = fr.sign;
	this->gradeToSign = fr.gradeToSign;
	this->gradeToExecute = fr.gradeToExecute;
	return *this;
}

int	AForm::beSigned(Bureaucrat &br)
{
	if(br.getGrade() > this->gradeToSign)
	{
		std::cout << br.getName() << " couldn’t sign " << this->name << " because grade is too low." << std::endl;
		throw GradeTooLowException();
	}
	else
	{
		this->sign = 1;
		return 1;
	}
}

int	AForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->gradeToExecute)
	{
		std::cout << executor.getName() << " couldn’t execute " << this->name << " because grade is too low." << std::endl;
		throw GradeTooLowException();
	}
	else
	{
		this->action();
		return 1;
	}
}

std::string	AForm::getname() const		
{ 
    return this->name; 
}

bool		AForm::getsign() const

{ 
    return this->sign; 
}

int			AForm::getgradetoSign() const		
{ 
        return this->gradeToSign;
}

int			AForm::getgradetoExecute() const	
{ 
        return this->gradeToExecute; 
}

void AForm::setName(std::string name) { this->name = name; }
void AForm::setSign(bool sign) { this->sign = sign; }
void AForm::setGradeToSign(int grade) { this->gradeToSign = grade; }
void AForm::setGradeToExecute(int grade) { this->gradeToExecute = grade; }


std::ostream &operator<<(std::ostream &out, AForm &fr){
	out << "AForm name " << fr.getname() << std::endl;
	out << "AForm sign " << fr.getsign() << std::endl;
	out << "AForm grade to Execute " << fr.getgradetoExecute() << std::endl;
	out << "AForm grade to Sign " << fr.getgradetoSign() << std::endl;
	return out;
}
