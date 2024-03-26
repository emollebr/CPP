#include <cstdlib>

template <class myType, class F>
void iter(myType *a, int lenght, F func) {
    if (a == NULL || func == NULL)
        return ;
    for (int i = 0; i < lenght; ++i)
        func(a[i]);
}