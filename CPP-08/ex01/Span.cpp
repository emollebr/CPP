#include "Span.hpp"
#include <climits>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span(unsigned int N) : _maxSize(N), _list()
{
}

Span::Span( const Span & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->_list = rhs._list;
		this->_maxSize = rhs._maxSize;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Span const & i )
{
	o << "Size = " << i.getMaxSize() << "Values: ";
	std::list<int> list = i.getList();
	for (std::list<int>::iterator it = list.begin(); it != list.end(); ++*it) {
		o << *it << "\n";
	}
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
unsigned int	Span::getMaxSize(void) const {
	return (this->_maxSize);
}

std::list<int>	Span::getList(void) const {
	return (this->_list);
}

void Span::addNumber(int num) {
	if (_list.size() >= _maxSize)
		throw std::out_of_range("Span::addNumber: Already full\n");
	_list.push_back(num);
}

void    Span::addRange(std::list<int>::iterator begin, std::list<int>::iterator end)
{
    if (_list.size() + std::distance(begin, end) > _maxSize)
        throw std::out_of_range("Span::addRange: Too many elements to Span\n");
    else
        _list.insert(_list.end(), begin, end);
}

unsigned int	Span::shortestSpan( void ) const {
    if (_list.size() <= 1)
		throw std::out_of_range("Span::shortestSpan: Not enough elements\n");
    
    std::list<int> sortedNumbers = _list;
    sortedNumbers.sort();
    unsigned int minSpan = UINT_MAX;

    // Iterate over the sorted list to find the minimum span
    std::list<int>::iterator it = sortedNumbers.begin();
    std::list<int>::iterator nextIt = it;
	nextIt++;
    while (nextIt != sortedNumbers.end()) {
        unsigned int span = *nextIt - *it;
        if (span < minSpan)
            minSpan = span;
        ++it;
        ++nextIt;
    }

    return minSpan;
}

unsigned int	Span::longestSpan( void ) const {
    if (_list.size() <= 1)
		throw std::out_of_range("Span::longestSpan: Not enough elements\n");
    
   	std::list<int>::const_iterator min = std::min_element(_list.begin(), _list.end());
    std::list<int>::const_iterator max = std::max_element(_list.begin(), _list.end());
	return (*max - *min);
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */