#include <iostream>
#include "prog7_2.h"
using namespace std;

int main(){
	Sales_data total;
	if(cin >> total.bookNo >> total.usold >> total.revenue){
		Sales_data trans;
		while(cin >> trans.bookNo >> trans.usold >> trans.revenue){
			if(total.bookNo == trans.bookNo)
				total.combine(trans);
			else{
				cout << total.bookNo << total.usold << total.revenue << endl;
				total = trans;
				}
			}
			cout << total.bookNo << total.usold << total.revenue << endl;
		}else{
			cerr << "No data?!" << endl;
			}
	
	return 0;
	}
