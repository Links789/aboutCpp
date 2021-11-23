#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;
using namespace std::placeholders;

bool check_size(const string &st, size_t str2){
	return str2 > st.size();
	}

int main(){
	string s("123456");
	vector<int> vec{1,2,4,3,5,6};
	
	auto n = find_if(vec.begin(), vec.end(), bind(check_size, s, 1));
	
	if(n != vec.end())		cout << *n << endl;
	
	return 0;
	}
