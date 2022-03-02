#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	int sc1[5] = {1,2,3,4,5};
	int sc2[5] = {2,3,4,5,6};
	
	for(int i = 0; i <5 ; i++){
		if(sc1[i] == sc2[i])
			cout << "y" << endl;
		else
			cout << "n" << endl;
	}


return 0;
}
