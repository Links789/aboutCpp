#include <iostream>
using namespace std;

struct Sales_data{
	string  bookNo;
	double revenue = 0.0;
	int usold= 0;
	};

int main(){
	Sales_data total;
	if(cin >> total.bookNo >> total.usold >> total.revenue){
		Sales_data trans;
		while(cin >> trans.bookNo >> trans.usold >> trans.revenue){
			if(total.bookNo == trans.bookNo){
				total.usold += trans.usold;
				total.revenue += trans.revenue;
			}
			else{
				cout << total.bookNo << " " << total.usold << " " << total.revenue << endl;
				total = trans;
				}
			}
			cout << total.bookNo << " " << total.usold << " " << total.revenue << endl;
		}d
	else{ 
			cerr << "No data?!" << endl;
			return -1;
			}
		
	return 0;
	}
