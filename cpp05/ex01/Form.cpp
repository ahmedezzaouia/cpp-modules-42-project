
#include "Bureaucrat.hpp"
#include "Form.hpp"


Form::Form(std::string name, int gradetoSign, int gradetoExecute)
{
	this->name = name;
	this->sign = 0;
	this->gradeToSign = gradetoSign;
	this->gradeToExecute = gradetoExecute;
}


Form::Form(Form const &fr)
{
    std::cout << "From " << this->name << " copied with copy constuctor." << std::endl;
	*this = fr;
}

Form::~Form() { 
    std::cout << "Form " << this->name << "destructor called" << std::endl;
}

Form &Form::operator=(Form const &fr)
{
    std::cout << "Form " << this->name << " copied with copy assignment operator." << std::endl;
	this->name = fr.name;
	this->sign = fr.sign;
	this->gradeToSign = fr.gradeToSign;
	this->gradeToExecute = fr.gradeToExecute;
	return *this;
}

int	Form::beSigned(Bureaucrat &br)
{
	if (this->sign == 1)
		return 0;
	else if(br.getGrade() > this->gradeToSign)
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


std::string	Form::getname() const		
{ 
    return this->name; 
}

bool		Form::getsign() const

{ 
    return this->sign; 
}

int			Form::getgradetoSign() const		
{ 
        return this->gradeToSign;
}

int			Form::getgradetoExecute() const	
{ 
        return this->gradeToExecute; 
}


std::ostream &operator<<(std::ostream &out, Form &fr){
	out << "Form name " << fr.getname() << std::endl;
	out << "Form sign " << fr.getsign() << std::endl;
	out << "Form grade to Execute " << fr.getgradetoExecute() << std::endl;
	out << "Form grade to Sign " << fr.getgradetoSign() << std::endl;
	return out;
}
