#include <iostream>
#include <string>
#include "prog7_2.h"
using namespace std;

Sales_data add(const Sales_data &lhs, const Sales_data &rhs){
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
	}
	
istream &read(istream &is, Sales_data &item){
	double price = 0;
	is >> item.bookNo >> item.usold >> price;
	item.revenue = price * item.usold;
	return is;
	}
	
ostream &print(ostream &os, const Sales_data &item){
	os << item.isbn() << " " << item.usold << " " << item.revenue << " " <<  endl;
	return os;
	}
