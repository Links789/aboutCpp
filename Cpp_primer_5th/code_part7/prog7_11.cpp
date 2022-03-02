#include <iostream>
#include <string>
using namespace std;

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
	
int main(){
	Sales_data t1();

	Sales_data t2("33-90");

	Sales_data t3("77-21",23,23.0);

	Sales_data t4(cin);
	
	return 0;
	}
