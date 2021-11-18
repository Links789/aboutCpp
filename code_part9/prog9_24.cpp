#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> vec{1,2,3,4,5,6};
	
	auto v1 = vec.at(0);
	auto v2 = vec[0];
	auto v3 = vec.front();
	auto v4 = vec.begin();
	
	
	return 0;
	}
