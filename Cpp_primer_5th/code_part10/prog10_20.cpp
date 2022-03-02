#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

size_t b6(vector<string> &i){
	
	return count_if(i.begin(), i.end(), [](string const &s) 
														{return s.size() > 6;}
														);
	
	}

int main(){
	vector<string> st{"time","great","words>6","words2>6"};

	cout << b6(st) << endl;
	
	return 0;
	}
