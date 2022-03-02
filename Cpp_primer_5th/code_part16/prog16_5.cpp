#include <iostream>

template <typename array>
void print(const array &ar)
{
    for (const auto &elem : ar)
        std::cout << elem << std::endl;
}