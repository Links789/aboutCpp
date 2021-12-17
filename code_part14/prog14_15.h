#include <iostream>
#include <string>

class Book
{
    friend std::istream &operator>>(std::istream &, Book &);
    friend std::ostream &operator<<(std::ostream &, const Book &);
    friend bool operator==(const Book &, const Book &);
    friend bool operator!=(const Book &, const Book &);
    friend bool operator<(const Book &, const Book &);
    friend bool operator>(const Book &, const Book &);
    friend Book operator+(const Book &, const Book &);

public:
    Book() = default;
    Book(std::string bookName, std::string author, unsigned number, unsigned publishYear) : bookName(bookName), author(author), publishYear(publishYear), number(number) {}
    Book(std::istream &in) { in >> *this; }

    Book &operator+=(const Book &);

private:
    std::string bookName;
    std::string author;
    unsigned number;
    unsigned publishYear;
};

std::istream &operator>>(std::istream &, Book &);
std::ostream &operator<<(std::ostream &, const Book &);
bool operator==(const Book &, const Book &);
bool operator!=(const Book &, const Book &);
bool operator<(const Book &, const Book &);
bool operator>(const Book &, const Book &);
Book operator+(const Book &, const Book &);