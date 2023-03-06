#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm{
    
public:
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const &sf);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &sf);

	void	action() const;
};

#endif
