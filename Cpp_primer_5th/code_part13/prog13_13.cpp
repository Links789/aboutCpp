#include <iostream>
#include <vector>
#include <initializer_list>
using namespace std;

struct x{
	x() {cout << "x()" << endl;}
	x(const x&) {cout << "x (const x&)" << endl;}
	x& operator = (const x&) {cout << "x& operator=(const x&)" << endl; return *this;}
	~x() {cout << "~x()" << endl;}
	};
	
void f(const x &rx, x a){
		vector<x> vec;
		vec.reserve(2);
		vec.push_back(rx);
		vec.push_back(a);
	}
	
int main(){
	x *px = new x;
	f(*px, *px);
	delete px;
	
	return 0;
	}


