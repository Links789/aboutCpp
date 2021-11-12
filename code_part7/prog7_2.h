#include <iostream>
using namespace std;

struct Sales_data{
	string isbn() const { return bookNo;}
	Sales_data& combine(const Sales_data&);
	
	string  bookNo;
	double revenue = 0.0;
	int usold= 0;
	};

Sales_data& Sales_data::combine(const Sales_data &rhs){
	usold += rhs.usold;
	revenue += rhs.revenue;
	return *this;
	}
