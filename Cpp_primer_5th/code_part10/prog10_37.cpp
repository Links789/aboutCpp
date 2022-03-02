#include <iostream>
#include <list>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

int main(){
	vector<int> vec{1,2,3,4,5,6,7};
	list<int> lis;
	
	copy(vec.crbegin() ,vec.crbegin() + 5, back_inserter(lis));
	
	for(auto i : lis)
		cout << i << " ";
	cout << endl;
	
	return 0;
	}
