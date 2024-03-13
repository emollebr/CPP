#ifndef INTERN_CLASS_HPP
# define INTERN_CLASS_HPP

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include <iostream>
# include <string>

class Intern
{
	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );
		AForm*			makeForm(std::string name, std::string target);

	private:

		class FormDoesNotExistException : public std::exception {
				public:
					virtual const char* what() const throw();
			};

};

std::ostream &			operator<<( std::ostream & o, Intern const & i );

#endif /* ********************************************************** INTERN_H */