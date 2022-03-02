#include <iostream>
#include <string>
using namespace std;

int main(){
	int a=0,e=0,i=0,o=0,u=0;
	char t;
	
	for(int c = 0; c < 9 ; ++c){
		cin >> t;
		if(t == 'a')	++a;
		else if(t == 'e')	++e;
		else if(t == 'i')	++i;
		else if(t == 'o')	++o;
		else if(t == 'u')	++u;
		}
		
	cout << "a: " << a << endl;
	cout << "e: " << e << endl;
	cout << "i: " << i << endl;
	cout << "o: " << o << endl;
	cout << "u: " << u << endl;
	
	return 0;
	}
