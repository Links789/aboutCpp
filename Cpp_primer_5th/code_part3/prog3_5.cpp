#include<iostream>
#include<string>
using namespace std;

int main(){
	string s,st;
	s += ' ';

	while(cin >> s){
		st += s;
		st += ' ';
		
		cout << st << endl;
	}
	return 0;

}
