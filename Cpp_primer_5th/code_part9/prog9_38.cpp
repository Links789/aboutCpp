#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> vec;
	
	for(int i = 0 ; i < 50 ; ++i){
		cout << "size: " << vec.size() << " ,capaci: " << vec.capacity() << endl;
		vec.push_back(i);
		}
		
	return 0;
	}
