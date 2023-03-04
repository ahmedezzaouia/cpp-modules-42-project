   
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name){
    std::cout << this->name << " construct called"<< std::endl;
    this->grade = grade;
	checkGarde();
}

Bureaucrat::~Bureaucrat() { 
    std::cout << "destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &br){
    std::cout << "Bureaucrat " << this->name << " copied with copy constuctor." << std::endl;
	*this = br;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &b){
    std::cout << "Bureaucrat " << this->name << " copied with copy assignment operator." << std::endl;
	grade = b.grade;
	return *this;
}

void	Bureaucrat::incrementGrade(int number){
	grade += number;
	checkGarde();
}

void	Bureaucrat::decrementGrade(int number){
	grade -= number;
	checkGarde();
}

std::string	Bureaucrat::getName() const{
	return name;
}

int	Bureaucrat::getGrade() const{
	return grade;
}

void	Bureaucrat::setGrade(int newGrade){
	grade = newGrade;
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

std::ostream &operator<<(std::ostream &out, Bureaucrat &br){
	out << br.getName() << ", bureaucrat grade " << br.getGrade() << std::endl;
	return out;
}
