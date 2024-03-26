#include "easyfind.hpp"
#include <vector>
#include <list>
#include <set>

int main() {

    std::cout << "Test vector" << std::endl;
    int vecArr[] = {1, 2, 3, 4, 5};
    std::vector<int> vec(vecArr, vecArr + sizeof(vecArr) / sizeof(vecArr[0]));
    if (easyfind(vec, 5) != vec.end())
        std::cout << "found" << std::endl;
    else
        std::cout << "not found" << std::endl;

    std::cout << "Test list" << std::endl;
    int lstArr[] = {12, 65, 399, 123124, 0};
    std::list<int> lst(lstArr, lstArr + sizeof(lstArr) / sizeof(lstArr[0]));
     if (easyfind(lst, 100) != lst.end())
        std::cout << "found" << std::endl;
    else
        std::cout << "not found" << std::endl;

    std::cout << "Test set" << std::endl;
    int stArr[] = {0, 0, 0, 100};
    std::set<int> st(stArr, stArr + sizeof(stArr) / sizeof(stArr[0]));
    if (easyfind(st, 100) != st.end())
        std::cout << "found" << std::endl;
    else
        std::cout << "not found" << std::endl;

    return 0;
}