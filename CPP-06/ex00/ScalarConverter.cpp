#include "ScalarConverter.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter( const ScalarConverter & src ) {
    (void)src;
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/
ScalarConverter::~ScalarConverter() {}
/*
** --------------------------------- OVERLOAD ---------------------------------
*/
ScalarConverter &				ScalarConverter::operator=( ScalarConverter const & rhs )
{
	(void)rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ScalarConverter const & i )
{
	(void)i;
	return o;
}
/*
** --------------------------------- METHODS ----------------------------------
*/

const char*     ScalarConverter::ImpossibleException::what() const throw() {
    return "Conversion impossible!";
}

static bool	isChar(const char *s) {
	if (strlen(s) == 1 && s[0] >= 32 && s[0] <= 126)
        if (!(s[0] >= '0' && s[0] <= '9'))
		    return (true);
	return(false);
}

static bool	isInt(const char *s) {
	while (*s == '-' || *s == '+')
        ++s;
    while (*s != '\0') {
        if (!isdigit(*s)) {
            return false;
        }
        ++s;
	}
    return true;
}

static bool	isFloat(const char *s) {
    bool    fraction = 0;
    for (size_t i = 0; i <= strlen(s); i++)
    {
        if (isdigit(s[i]) == 0)
        {
            if (i == 0 && s[i] == '-')
                continue;
            else if (s[i] == '.' && i != 0 && fraction == 0 && i != (strlen(s) - 1)) // check if character is . and not last character
            {
                fraction = 1;
                continue;
            }
            else if (s[i] == 'f' && i > 0 && s[i - 1] != '.' && i == (strlen(s) - 1)) // check if las character is f and previous was not .
                return (type_float);
            else
                break;
        }
    }
    std::string str(s);
    if (str == "nanf" || str == "-inff" || str == "+inff")
        return (true);
    return (false);
}

static bool	isDouble(const char *s) {
    bool    fraction = 0;

    for (size_t i = 0; i <= strlen(s); i++)
    {

        if (i == strlen(s))
            return (true);
        if (isdigit(s[i]) == 0)
        {
            if (i == 0 && s[i] == '-')
                continue;
            else if (s[i] == '.' && i != 0 && fraction == 0 && i != (strlen(s) - 1)) // check if character is . and not last character
            {
                fraction = 1;
                continue;
            }
            else
                break;
        }
    }
    std::string str(s);
    if (str == "nan" || str == "-inf" || str == "+inf")
        return (true);
    return (false);
}

static EScalarType    detectType(const char *s) {
	EScalarType scalar_types[4] = {type_char, type_int, type_float, type_double};
	bool		(*func_ptrs[4])(const char *s) = { &isChar, &isInt, &isFloat, &isDouble};

	for(int i = 0; i < 4; ++i) {
		if (func_ptrs[i](s) == true)
			return (scalar_types[i]);
	}
	return invalid;
}

static void	display(char c) {
    std::cout << "char: " << c << std::endl <<
    "int: " << static_cast<int>(c) << std::endl <<
    "float: " << static_cast<float>(c) << ".0f" << std::endl <<
    "double: " << static_cast<double>(c) << std::endl; 
}

static void	display(int c) {
    if (static_cast<double>(c) < 32 || static_cast<double>(c) > 126 || static_cast<double>(c) != c)
        std::cout << "char: not displayable" << std::endl; 
    else
        std::cout << "char: " << static_cast<char>(c) << std::endl;
    std::cout << "int: " << c << std::endl <<
    "float: " << static_cast<float>(c) << ".0f" << std::endl <<
    "double: " << static_cast<double>(c) << std::endl; 
}


void    display(double c)
{
    if (std::isnan(c) || std::isinf(c)) {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
    }
    else if (c < 32 || c > 126 || c != static_cast<int>(c)) {
        std::cout << "char: not displayable" << std::endl; 
        std::cout << "int: " << static_cast<int>(c) << std::endl;
    }
    else {
        std::cout << "char:" << static_cast<char>(c) << std::endl;
        std::cout << "int: " << static_cast<int>(c) << std::endl;
    }
    std::cout   << "float: " << static_cast<float>(c);
    if (c == static_cast<int>(c))
        std::cout << ".0f" << std::endl;
    else
        std::cout << "f" << std::endl;
    std::cout << "double: " << c << std::endl;
}

static void   display(float c)
{
    if (std::isnan(c) || std::isinf(c)) {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
    }
    else if (c < 32 || c > 126 || c != static_cast<int>(c)) {
        std::cout << "char: not displayable" << std::endl; 
        std::cout << "int: " << static_cast<int>(c) << std::endl;
    }
    else {
        std::cout << "char:" << static_cast<char>(c) << std::endl;
        std::cout << "int: " << static_cast<int>(c) << std::endl;
    }
    std::cout   << "float: " << c;
    if (c == static_cast<int>(c))
        std::cout << ".0f" << std::endl;
    else
        std::cout << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void	ScalarConverter::convert(const char *s) {
	//check if empty string!
	if (s == NULL || *s == '\0') {
			std::cout << "Error: empty string input" << std::endl;
			return ;
	}
	switch (detectType(s)) {
	case type_char:
		display(s[0]);
		break;
	case type_double: {
		char* c = const_cast<char*>(s);
		display(strtod(c, &c));
		break;
	}
	case type_float: {
		char* c = const_cast<char*>(s);
		display(strtof(c, &c));
		break;
	}
	case type_int:
		display(atoi(s));
		break;
	default:
		throw ImpossibleException();
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */