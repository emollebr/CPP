#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <stdint.h>
# include <list>
# include <cstdlib>

class Span
{

	public:
		//member functions
		void addNumber(int num);
		void addRange(std::list<int>::iterator begin, std::list<int>::iterator end);

		unsigned int	shortestSpan( void ) const;
		unsigned int	longestSpan( void ) const;

		unsigned int	getMaxSize(void) const;
		std::list<int>	getList(void) const;

		//OCF
		Span(unsigned int N);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

	private:
		unsigned int        _maxSize;
		std::list<int>    _list;

};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */