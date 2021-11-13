#include "prog7_21.h"

int main(){
	Sales_data total(cin);
	
	if(!total.isbn().empty()){
			istream &is = cin;
			while(is){
				Sales_data trans;
				if(total.isbn() == trans.isbn())
					total.combine(trans);
				else{
					print(cout, total) << endl;
					total = trans;
					}		
				}
	print(cout, total) << endl;
		}else{
			cerr << "No data?" << endl;
			}
	
	}
