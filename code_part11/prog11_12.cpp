#include <utility>
#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector< pair<string, int> > vec;
	string st;
	
	int n;
	for(int i = 0; i < 6 ;++i){
		cin >> n;
		vec.push_back( pair<string, int>(st, n));
		}
	
	for(auto &c : vec)
		cout << c.first << " : " << c.second << endl;
	
	return 0;
	}
