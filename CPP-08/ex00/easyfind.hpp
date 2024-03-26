#pragma once
# define EASYFIND_HPP

#include <cstdlib>
#include <iostream>
#include <algorithm>

template <typename T> 
typename T::iterator easyfind(T& container, const int &n) {
    return (std::find(container.begin(), container.end(), n));
}
