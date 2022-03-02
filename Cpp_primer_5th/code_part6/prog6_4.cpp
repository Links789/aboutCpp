#include <iostream>
using namespace std;

int inter(int number){
	int res = 1;
	
	while(number > 1)
		res *= number--;
		
	return res;
}

int main(){
	int n;
	cin >> n;
	cout << inter(n) << endl;
	
	return 0;
}
