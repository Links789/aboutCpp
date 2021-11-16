#include <iostream>
#include <string>
using namespace std;

istream& Lst(istream& st1){
	string st2;
	
	while(st1 >> st2)
		cout << st2 << endl;
	
	st1.clear();
	
	return st1;
	}
	
int main(){
	
	istream& n = Lst(cin);
	
	cout << n.rdstate() << endl;
	
	return 0;
	}
