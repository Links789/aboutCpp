#include <iostream>
#include <string>
using namespace std;

int main(){
	string st;

	cin >> st;

	for(auto &s : st)
		s = 'X';
	
	cout << st << endl;

	return 0;
}
