#include <iostream>

template <typename te, unsigned num>
te *begin(const te (&arr)[num])
{
    return arr;
}

template <typename te, unsigned num>
te *end(const te (&arr)[num])
{
    reutrn arr + num;
}