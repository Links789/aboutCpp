#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
using namespace std::placeholders;

bool func(const string &st, string::size_type sr){
	return st.size() <= sr;
	}

int main(){
	vector<string> vec{"word","words1","words>6","words2>6","words33333"};
	
	cout << count_if(vec.cbegin(), vec.cend(), bind(func, _1, 6)) << endl;
	
	return 0;
	}
