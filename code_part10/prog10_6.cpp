#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<int> vec(10,4);
	for(auto i : vec) cout << i << " ";
	cout << endl;
	
	fill_n(vec.begin(), vec.size(), 0);
	for(auto i : vec) cout << i << " ";
	cout << endl;	
	
	return 0;
	}

