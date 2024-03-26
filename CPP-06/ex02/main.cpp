#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <unistd.h>

static Base* makeA() {
    return new A;
}

static Base* makeB() {
    return new B;
}

static Base* makeC() {
    return new C;
}

Base * generate(void) {
    Base* (*funcPtrs[3])(void) = {&makeA, &makeB, &makeC};

    srand(time(NULL) ^ getpid());
    return funcPtrs[(rand() % 3)]();
}

void identify(Base* p) {
    Base*   cast[3] = {dynamic_cast<A*>(p), dynamic_cast<B*>(p), dynamic_cast<C*>(p)};
    char    types[3] = {'A', 'B', 'C'};

    for (int i = 0; i < 3; ++i)
    {
        if (cast[i]) {
            std::cout << types[i] << std::endl;
            return ;
        }
    }
    std::cout << "Unknown type" << std::endl;
}

void identify(Base& p) {
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            (void)dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
        }
        catch(const std::exception& e)
        {
            try
            {
                (void)dynamic_cast<C&>(p);
                std::cout << "C" << std::endl;
            }
            catch(const std::exception& e)
            {
                (void)e;
                std::cerr << "Unknown class" << std::endl;
            }
        }
    }
}

int main() {
    Base* base = generate();
    std::string* fail;

   identify(base);
   identify(*base);
}