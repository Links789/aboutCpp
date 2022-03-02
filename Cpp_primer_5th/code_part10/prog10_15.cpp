#include <iostream>
using namespace std;

int main(){
	int i = 10;
	
	auto n = [i](int x = 2){return i+x;};
	
	return 0;
	}
