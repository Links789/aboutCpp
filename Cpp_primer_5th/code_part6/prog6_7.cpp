#include <iostream>
using namespace std;

size_t count(){
	static size_t ctr = 0;
	if(ctr == 0){
		ctr++;
		return 0;
		}
	else
		return ++ctr;
	}
	
int main(){
	for(size_t i = 0 ; i != 10 ; ++i)
		cout << count() << endl;
	
	return 0;
	}
