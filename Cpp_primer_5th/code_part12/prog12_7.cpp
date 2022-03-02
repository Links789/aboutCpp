#include <iostream>
#include <vector>
#include <memory>
using namespace std;

shared_ptr<vector<int>>vec(){
	return make_shared<vector<int>>();
	}
	
void read(shared_ptr<vector<int>> p){
	int n;
	while(cin >> n)
		p->push_back(n);
	}

void prin(shared_ptr<vector<int>> p){
	for(auto i : *p)
		cout << i << endl;
	}

int main(){
	auto p = vec();
	read(p);
	prin(p);
	
	return 0;
	}

