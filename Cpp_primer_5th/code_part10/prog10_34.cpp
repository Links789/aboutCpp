#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> vec{1,2,3,4,5,6};
	
	for(auto i = vec.crbegin(); i != vec.crend() ; ++i)
		cout << *i << " ";
	cout <<endl;
	
	return 0;
	}
