#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
	map<string, size_t> word_count;     //	map<key, value>
	string word;
	
	for(int i = 0 ; i < 3 ; ++i){
		cin >> word;
		++word_count[word];
	}
	
	for(const auto &w : word_count)
		cout << w.first << " occurs " << w.second
				<< ((w.second > 1) ? " times" : " time") << endl;
	
	return 0;j
	}
