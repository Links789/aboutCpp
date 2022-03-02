#include <iostream>
#include <string>
using namespace std;

int main(){
	string st = "test,test,test.test!";
	string str;

	for(auto s : st){
		if(!ispunct(s))
			str += s;	
	}
	cout << str << endl;

	return 0;

}
