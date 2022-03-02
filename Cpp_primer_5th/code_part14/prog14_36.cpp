#include <iostream>
#include <string>
#include <vector>

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
    Print out;
    std::vector<std::string> vec;
    std::string st;

    for (int i = 0; i <= 4; ++i)
    {
        out();
        st = out();
        vec.push_back(st);
    }

    for (auto &s : vec)
        std::cout << s << " ";

    std::cout << std::endl;

    return 0;
}