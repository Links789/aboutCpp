#include <iostream>
using namespace std;

int A(string s){
	int num = 0;
	
	for(auto &i : s){
		if(isupper(i))
			++num;
		}
	
	if(num > 0)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	}

int a(string &s){
	for(auto &i : s){
		i = tolower(i);
		}
	cout << s << endl;
	}

int main(){
	string st;
	cin >> st;
	
	A(st);
	a(st);
	
	return 0;
	}
