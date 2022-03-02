#include <iostream>

template <typename tem, typename num>
constexpr unsigned size(const tem (&arr)[num])
{
    return num;
}
