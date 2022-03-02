#include <iostream>
#include <string>
using namespace std;

istream& Ist(istream& st1){
	string st2;
	
	while(st1 >> st2)
		cout << st2 << endl;
	
	st1.clear();
	
	return st1;
	}
