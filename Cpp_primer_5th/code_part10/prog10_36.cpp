#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(){
	list<int> lis{1,0,3,4,0,7};
	
	auto i = find(lis.crbegin(), lis.crend(), 0);
	
	cout << *i << endl;
	
	return 0;
	}
