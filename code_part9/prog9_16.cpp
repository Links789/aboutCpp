#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;

int main(){
	vector<int> a{1,2,3,4};
	vector<int> b{1,2,3,4,5,6};
	list<int> li{1,2,3,4,5,6};
	
	cout << (vector<int>(li.begin(), li.end()) == a ? "a = li" : "a != li" ) << endl;
	cout << (vector<int>(li.begin(), li.end()) == b ? "b = li" : "b != li" ) << endl;
	
	return 0;
	}
