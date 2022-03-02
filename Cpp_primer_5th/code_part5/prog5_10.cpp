#include <iostream>
#include <string>
using namespace std;

int main(){
	char ch;
	int a=0,e=0,i=0,o=0,u=0;
	
	for(int loop = 0 ; loop < 4 ; ++loop){
	cin >> ch;
	switch(ch){
		case 'a':
		case 'A':
			++a;
			break;
		
		case 'e':
		case 'E':
			++e;
			break;
			
		case 'i':
		case 'I':
			++i;
			break;
			
		case 'o':
		case 'O':
			++o;
			break;
		
		case 'u':
		case 'U':
			++u;
			break;
		}
		}
	cout << "a: \n" << a;
	cout << "e: \n" << e;
	cout << "i: \n" << i;
	cout << "o: \n" << o;
	cout << "u: \n" << u;
	
	
	return 0;
	}
