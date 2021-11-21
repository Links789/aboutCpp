#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <string>
using namespace std;

int main(){
	list<string> li{"test","hello","good","great","test"};
	
	cout << count(li.begin(),li.end(), "test") << endl;
	
	return 0;
	}



