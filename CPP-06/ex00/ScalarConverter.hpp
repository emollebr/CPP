#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

# include <iostream>
# include <string>
# include <string.h>
# include <ctype.h>
# include <cstdlib>
# include <sstream>
# include <cmath>

enum EScalarType{
    type_char,
    type_float,
    type_int,
    type_double,
    invalid
};

class ScalarConverter
{
	public:
		static void	convert(const char *str);

	private:
		ScalarConverter();
		ScalarConverter( ScalarConverter const & src );
		~ScalarConverter();

		ScalarConverter &		operator=( ScalarConverter const & rhs );
	
	class ImpossibleException : public std::exception {
		public:
			const char *what () const throw();
	};

};

std::ostream &			operator<<( std::ostream & o, ScalarConverter const & i );

#endif /* ************************************************* SCALAR_CONVERTER_H */