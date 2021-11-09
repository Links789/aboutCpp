#include <iostream>
using namespace std;

int re(int *n1,int *n2){
	int *set;
	
	set = n1;
	n1 = n2;
	n2 = set;
	
	}

int main(){
	int a,b;
	cin >> a >> b;
	
	re(&a,&b);
	cout << a << b << endl;
	
	return 0;
	}
