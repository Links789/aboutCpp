#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	vector<int> a{1,2,3,4};
	vector<int> b{1,2,3,4,5,6};
	
	if(a == b)
		cout << "a = b" << endl;
	else
		cout << "a != b" << endl;
	
	return 0;
	}
