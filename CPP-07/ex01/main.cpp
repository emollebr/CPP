#include "iter.hpp"
#include <iostream>

void add_one(int &num) {
    num += 1;
}

int main() {
    int arr[3] = {0, 1, 2};

    std::cout << arr[0] << arr[1] << arr[2] << std::endl;
    ::iter(arr, 3, &add_one);
    std::cout << arr[0] << arr[1] << arr[2] << std::endl;
}