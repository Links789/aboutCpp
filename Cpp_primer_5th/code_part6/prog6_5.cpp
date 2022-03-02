#include <iostream>
using namespace std;

int input(int number){
	if(number >= 0)
		return number;
	else
		return -number;
	}
	
int main(){
	int n;
	cin >> n;
	cout << input(n) << endl;
	
	return 0;
	}
