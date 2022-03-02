#include<iostream>
#include "Sales_item.h"
using namespace std;

int main(){
	Sales_item total,trans;

	if(cin >> total){
		while(cin >> trans){
			if(total.isbn() == trans.isbn()){
				total += trans;
			}
			else{
				cout << total << endl;
				total = trans;
			}
		}
		cout << total << endl;
	}
	else
		cout << "It seems like No data." << endl;

return 0;
}
