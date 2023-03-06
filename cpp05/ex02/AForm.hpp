#ifndef AForm_HPP
# define AForm_HPP

#include "Bureaucrat.hpp"
#include <cstdlib>

class Bureaucrat;

class AForm{

    public:

        AForm(std::string name, int gradetoSign, int gradetoExecute);
        AForm(AForm const &fr);
        ~AForm();

        AForm &operator=(AForm const &fr);


        int	beSigned(Bureaucrat &br);
        int	execute(Bureaucrat const & executor) const;


        std::string	getname() const;
        bool		getsign() const;
        int			getgradetoSign() const;
        int			getgradetoExecute() const;

        void setName(std::string name);
        void setSign(bool sign);
        void setGradeToSign(int grade);
        void setGradeToExecute(int grade);

        class GradeTooHighException : public std::exception
        {
            const char * what() const throw () { return "Grade too high";};
        };

        class GradeTooLowException : public std::exception
        {
            const char * what() const throw () { return "Grade too low";};
        };

    protected:
        virtual void	action() const = 0;
	    std::string	    target;
        
    private:
        std::string name;
        bool	    sign;
        int		    gradeToSign;
        int		    gradeToExecute;

    };

std::ostream	&operator<<(std::ostream &out, AForm &fr);
#endif
