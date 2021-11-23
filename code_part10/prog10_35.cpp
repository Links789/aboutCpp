#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> vec{1,2,3,4,5,6};
	
	for(auto i = (vec.end() - 1); i != vec.begin(); --i)
		cout << *i << " ";
	cout << endl;
	
	return 0;
	}
