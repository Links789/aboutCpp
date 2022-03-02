#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	
	list<const char*> li{"hello","something"};
	vector<string> vec;
	vec.assign(li.cbegin(),li.cend());
	
	
	return 0;
	}
