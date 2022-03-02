#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> vi{1,2,3,4,5};
	auto iter = vi.begin();
	
	while(iter != vi.end() ){	//endless loo
		iter = vi.insert(iter, *iter);
		cout << *iter << endl;
		}
		
	++iter;
	
	return 0;
	}
