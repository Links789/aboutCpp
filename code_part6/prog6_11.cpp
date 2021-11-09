#include <iostream>
#include <string>
using namespace std;

int reset(int &i){
	i = 0;
	}

int main(){
	int i;
	cin >> i;
	
	reset(i);
	
	cout << i << endl;
	
	return 0;
	}
