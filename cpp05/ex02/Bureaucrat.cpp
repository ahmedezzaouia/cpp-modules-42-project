   
#include "AForm.hpp"
#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string name, int grade) : name(name){
    std::cout << this->name << " construct called"<< std::endl;
    this->grade = grade;
	checkGarde();
}

Bureaucrat::~Bureaucrat() { 
    std::cout << this->name << " destructor called"<< std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &br){
    std::cout << "Bureaucrat " << this->name << " copied with copy constuctor." << std::endl;
	*this = br;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &b){
    std::cout << "Bureaucrat " << this->name << " copied with copy assignment operator." << std::endl;
	this->grade = b.grade;
	return *this;
}

void	Bureaucrat::incrementGrade(int number){
	this->grade += number;
	checkGarde();
}

void	Bureaucrat::decrementGrade(int number){
	this->grade -= number;
	checkGarde();
}

std::string	Bureaucrat::getName() const{
	return this->name;
}

int	Bureaucrat::getGrade() const{
	return this->grade;
}

void	Bureaucrat::setGrade(int newGrade){
	this->grade = newGrade;
	checkGarde();
}

void Bureaucrat::checkGarde() {
    if (this->grade > 150) {
        throw GradeTooLowException();
    }
    else if (this->grade < 1) {
        throw GradeTooHighException();
    }
}

void	Bureaucrat::signForm(AForm &form)
{
	if (form.getsign()){
	    std::cout << this->name << " already signed " << form.getname() << std::endl;
	}
	else if (form.beSigned(*this))
	{
		std::cout << this->name << " signed " << form.getname() << std::endl;
	}
	

}

void	Bureaucrat::executeForm(AForm const &form)
{
	if (form.getsign() == 0)
	{
		std::cout << form.getname() << " Couldn’t execute  because is not signed." << std::endl;
	}
	else if (form.execute(*this))
	{
		std::cout << this->name << " executed " << form.getname() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &br){
	out << br.getName() << ", bureaucrat grade " << br.getGrade() << std::endl;
	return out;
}
