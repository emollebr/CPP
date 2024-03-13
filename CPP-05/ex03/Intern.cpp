#include "Intern.hpp"

static AForm	*makePresident(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

static AForm	*makeRobot(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

static AForm	*makeShrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm*			Intern::makeForm(std::string name, std::string target) {
    std::string list_form_names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm* (*funcPtrs[3])(const std::string target) = { &makeShrubbery, &makeRobot, &makePresident };
	int i;

	for (i = 0; i < 3; ++i)
	{
		if (list_form_names[i] == name) {
            std::cout << "Intern creates " << list_form_names[i] << " form" << std::endl;
            return (funcPtrs[i](target));
        }

	}
    throw Intern::FormDoesNotExistException();
    return (NULL);
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