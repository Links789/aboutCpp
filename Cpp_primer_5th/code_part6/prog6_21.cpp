#include <iostream>
using namespace std;

int re(int n1,const int *n2){
	if(n1 > *n2)
		return n1;
	else
		return *n2;
	}

int main(){
	
	int a,b;
	cin >> a >> b;
	
	cout << re(a,&b) << endl;
	
	return 0;
	}
