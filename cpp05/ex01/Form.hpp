#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{

    public:

        Form(std::string name, int gradetoSign, int gradetoExecute);
        Form(Form const &fr);
        ~Form();

        Form &operator=(Form const &fr);


        int	beSigned(Bureaucrat &br);

        std::string	getname() const;
        bool		getsign() const;
        int			getgradetoSign() const;
        int			getgradetoExecute() const;


        class GradeTooHighException : public std::exception
        {
            const char * what() const throw () { return "Grade too high";};
        };

        class GradeTooLowException : public std::exception
        {
            const char * what() const throw () { return "Grade too low";};
        };
        
    private:

        std::string name;
        bool	    sign;
        int		    gradeToSign;
        int		    gradeToExecute;

    };

std::ostream	&operator<<(std::ostream &out, Form &fr);
#endif
