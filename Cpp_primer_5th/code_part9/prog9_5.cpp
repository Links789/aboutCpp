#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int>::const_iterator func(vector<int>::const_iterator begin, vector<int>::const_iterator end, int i){
	while(begin != end){
		if(*begin == i)
			return begin;
		++begin;
		}
	
	return end;
	}
	
