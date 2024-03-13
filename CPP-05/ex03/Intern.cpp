#include "Intern.hpp"

AForm*			Intern::makeForm(std::string name, std::string target) {
    std::string list_form_names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm*	form;
	int i;

	for (i = 0; i < 3; ++i)
	{
		if (list_form_names[i] == name)
			break ;
	}
	switch (i)
    {
    case 0:
        form = new ShrubberyCreationForm(target);
        break;
    case 1:
        form = new RobotomyRequestForm(target);
        break;
     case 2:
        form = new PresidentialPardonForm(target);
        break;
    default:
        form = NULL;
        throw(Intern::FormDoesNotExistException());
        break;
    }
	std::cout << "Intern creates " << form->getName() << std::endl;
	return (form);
}

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	std::cout << "Intern constructed" << std::endl;
}

Intern::Intern( const Intern & src )
{
	(void)src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
	std::cout << "Intern destructed" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Intern const & i )
{
	(void)i;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

const char* Intern::FormDoesNotExistException::what() const throw() {
    return "Error: Form name invalid!";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */