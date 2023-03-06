#ifndef INTERN_HPP
# define INTERN_HPP
#include "AForm.hpp"


class Intern
{
    public:
        Intern();
        Intern(Intern const &intern);
        ~Intern();
        Intern &operator=(Intern const &intern);
        AForm	*makeForm(std::string formName, std::string target);
};

#endif
