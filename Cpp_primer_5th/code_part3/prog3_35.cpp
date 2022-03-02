#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	int sc[5];
	
	for(auto i = sc; i != sc + 10; ++i)
		*i = 0;
	
	for(auto &n : sc)
		cout << n;
	
	cout << endl;

return 0;
}
