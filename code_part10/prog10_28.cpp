#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <iterator>
#include <string>
using namespace std;

void pfunc(list<int> lis){ 	//print_func
	for(auto i : lis)
		cout << i << " ";
	cout << endl;
	}

int main(){
	vector<int> vc{1,2,3,4,5,6,7,8};
	list<int> li1,li2,li3;
	
	copy(vc.begin(), vc.end(), inserter(li1, li1.begin() ) );
	
	pfunc(li1);
	
	copy(vc.begin(), vc.end(), back_inserter(li2) );
	pfunc(li2);
	
	copy(vc.begin(), vc.end(), front_inserter(li3) );
	pfunc(li3);
	
	return 0;
	}
