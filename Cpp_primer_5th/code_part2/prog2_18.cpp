#include<iostream>
using namespace std;

int main(){
	int n1 = 1, n2 = 2;
	int *p1 = &n1, *p2 = &n2;

	cout << "1. " << p1 << " "  << *p2 << endl;

	p1 = &n2;
	*p2 = n1;

	cout << "2. " << p1 << " " << *p2 << endl;

	return 0;
}

