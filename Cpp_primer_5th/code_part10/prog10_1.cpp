#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	vector<int> vec{1,1,2,2,2,2,3,3,3,4};
	
	cout << count(vec.begin(),vec.end(),4) << endl;
	
	
	return 0;
	}
