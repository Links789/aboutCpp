#include <iostream>
#include <vector>
//#include <memory>
using namespace std;

vector<int>* vec(){
	return new vector<int>();
	}
	
void read(vector<int> *p){
	int n;
	while(cin >> n)
		p->push_back(n);
	}

void prin(vector<int> *p){
	for(auto i : *p)
		cout << i << endl;
	}

int main(){
	auto p = vec();
	read(p);
	prin(p);
	delete p;
	
	return 0;
	}
