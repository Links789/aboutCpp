#include "prog14_15.h"

std::istream &operator>>(std::istream &i, Book &book)
{
    i >> book.number >> book.author >> book.bookName >> book.publishYear;
    return i;
}

std::ostream &operator<<(std::ostream &o, const Book &book)
{
    o << book.number << " " << book.author << " " << book.bookName << " " << book.publishYear;
    return o;
}

bool operator==(const Book &lhs, const Book &rhs)
{
    return lhs.number == rhs.number;
}

bool operator!=(const Book &lhs, const Book &rhs)
{
    return !(lhs.number == rhs.number);
}

bool operator<(const Book &lhs, const Book &rhs)
{
    return lhs.number < rhs.number;
}

bool operator>(const Book &lhs, const Book &rhs)
{
    return lhs.number > rhs.number;
}

Book operator+(const Book &lhs, const Book &rhs)
{
    Book book = lhs;
    book += rhs;
    return book;
}

Book &Book::operator+=(const Book &rhs)
{
    if (rhs == *this)
        this->number += rhs.number;

    return *this;
}

/**************************************************/
int main()
{
    Book book1("BookOne", "Bob", 3, 2020);
    Book book2("BookTwo", "Mike", 8, 2034);

    std::cout << book1 + book2 << std::endl;
    return 0;
}