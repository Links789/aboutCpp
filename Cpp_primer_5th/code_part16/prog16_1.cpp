#include <iostream>

template <typename A>
int compare(const A &lhs, const A &rhs)
{
    if (lhs < rhs)
        return -1;
    if (lhs > rhs)
        return 1;
    return 0;
}

int main()
{
    compare(7, 5);
    return 0;
}