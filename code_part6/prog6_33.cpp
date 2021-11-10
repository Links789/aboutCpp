#include <iostream>
#include <vector>
using namespace std;

int vec(int n){
	
	while(n > 0){
		n -= 1;
		vec(n);
	}
	return n;
	}

int main(){
	vector<int> num;
	
	cout << vec(6) << endl;
	
	}

