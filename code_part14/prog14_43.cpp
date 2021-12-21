#include <iostream>
#include <string>
#include <functional>
#include <algorithm>

int main()
{
    auto num = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int input;
    std::cin >> input;
    std::modulus<int> mod;
    auto predicator = [&](int i)
    { return 0 == mod(input, i); };
    auto is_divisible = std::any_of(num.begin(), num.end(), predicator);
    std::cout << (is_divisible ? "Yes" : "No!") << std::endl;

    return 0;
}