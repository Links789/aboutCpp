#include <iostream>
#include <string>
using namespace std;

/*****?????*****/
struct Sales_data;
istream &read(istream&, Sales_data&)
/*****?????****/

struct Sales_data{
	Sales_data() = default;
	Sales_data(const string &s): bookNo(s){}
	Sales_data(const string &s, unsigned n, double p):
				bookNo(s), units_sold(n), revenue(p*n){}
	Sales_data(istream &);
	
	string isbn() const{ return bookNo;}
	Sales_data& combin(const Sales_data&);
	
	double avg_price() const;
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;	
	};
	
istream &read(istream &is , Sales_data &item){
	double price = 0.0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
	}
