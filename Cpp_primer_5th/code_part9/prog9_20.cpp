#include <iostream>
#include <string>
#include <deque>
#include <list>
using namespace std;

int main(){
	list<int> li{1,2,3,4,5,6,7,8,9};
	deque<int> d1,d2;
	
	for(auto &i : li){
		if(i % 2 == 0)
			d1.push_back(i);
		else
			d2.push_back(i);
		}
	
	for(auto i : d1) cout << i << " ";
	cout << endl;
	for(auto i : d2) cout << i << " ";
	
	return 0;
	}
