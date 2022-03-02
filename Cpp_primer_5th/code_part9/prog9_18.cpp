#include <iostream>
#include <string>
#include <vector>
#include <deque>
using namespace std;

int main(){
	deque<string> de;
	for(string st ; cin >> st ; de.push_back(st))
			for(auto i = de.cbegin() ; i != de.cend() ; ++i)
				cout << *i << endl;
	
	return 0;
	}
