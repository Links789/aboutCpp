#include <iostream>
#include "Sales_item.h"
using namespace std;

int main(){
	Sales_item i1,i2;

	cin >> i1 >> i2;

	if(i1.isbn() == i2.isbn())
		cout << i1 + i2 << endl;
	else
		cout << "Try again? " << endl;

return 0;
} 
