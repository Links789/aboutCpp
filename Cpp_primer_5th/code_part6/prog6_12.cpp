#include <iostream>
#include <string>
using namespace std;

int sw(int &pn1,int &pn2){
	int st;
	
	st = pn1;
	pn1 = pn2;
	pn2 = st; 
	}


int main(){
	int n1,n2;
	cin >> n1 >> n2;
	
	sw(n1,n2);
	cout << n1 << " | " << n2;
	
	return 0;
	}
