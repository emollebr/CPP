#include "ScalarConverter.hpp"

int main(int argc, char* argv[]) {

    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <to_convert>" << std::endl;
        return 1;
    }
    try {
    ScalarConverter::convert(argv[1]);
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}