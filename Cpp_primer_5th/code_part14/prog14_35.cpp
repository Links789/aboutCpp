#include <iostream>
#include <string>

class Print
{
public:
    Print(std::istream &i = std::cin) : is(i) {}
    std::string operator()() const
    {
        std::string str;
        std::getline(is, str);
        return is ? str : std::string();
    }

private:
    std::istream &is;
};

int main()
{
    Print prInt;
    std::cout << prInt() << std::endl;
}