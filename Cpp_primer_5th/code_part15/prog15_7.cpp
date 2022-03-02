#include <iostream>
#include <string>

class Quote
{
public:
    Quote() = default;
    Quote(const std::string &b, double p) : bookNo(b), price(p) {}
    std::string isbn() const { return bookNo; }
    virtual double net_price(std::size_t n) const { return n * price; }
    virtual ~Quote() = default;

private:
    std::string bookNo;

protected:
    double price = 0.0;
};

class my_quote : public Quote
{
    my_quote();
    my_quote(const std::string &b, double p, std::size_t max, double disc) : Quote(b, p), max_qty(max), discount(disc) {}

    double net_price(std::size_t n) const override;

private:
    std::size_t max_qty = 0;
    double discount = 0.0;
};

double my_quote::net_price(std::size_t n) const
{
    if (n > max_qty)
        return max_qty * price * discount + (n - max_qty) * price;
    else
        return n * discount * price;
}

int main()
{
    return 0;
}