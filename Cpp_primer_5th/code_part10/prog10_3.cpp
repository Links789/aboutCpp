#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(){
	vector<int> vec{0,1,2,3,4,5,6,7,8,9};
	
	cout << "The sum is: " << 
		accumulate(vec.begin(), vec.end(),0) << endl;
	
	return 0;
	}
