#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat{
    public:
	    Bureaucrat(std::string name, int grade);
	    Bureaucrat(Bureaucrat const &br);
	    Bureaucrat &operator=(Bureaucrat const &br);
	    ~Bureaucrat();
	    void	incrementGrade(int);
	    void	decrementGrade(int);

	    std::string	getName() const;
	    int	        getGrade() const;
	    void	    setGrade(int);
        void		checkGarde();

        class GradeTooHighException : public std::exception
        {
            const char * what() const throw () { return "Grade too high";};
        };

        class GradeTooLowException : public std::exception
        {
            const char * what() const throw () { return "Grade too low";};
        };

    private:
        std::string	name;
        int			grade;
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat &b);
#endif
