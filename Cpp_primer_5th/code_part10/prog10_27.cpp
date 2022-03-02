#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){
	vector<int> vec{1,1,2,2,3,3,4,4,5,5,6,6};
	list<int> lis;
	
	unique_copy(vec.begin(), vec.end(), back_inserter(lis));
	
	for(auto i : lis)
		cout << i << " ";
	cout << endl;

	
	return 0;
	}
