#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool func(vector<int>::const_iterator begin, vector<int>::const_iterator end, int i){
	while(begin != end){
		if(*begin == i)
			return 0;
		++begin;
		}
	
	return 1;
	}
	
