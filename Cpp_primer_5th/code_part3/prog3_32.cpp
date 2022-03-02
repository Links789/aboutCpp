#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	vector<int> sc1(10);
	for(int i = 0; i < 10 ; i++)
		sc1[i] = i;
	
	vector<int> sc2(sc1);
	for(auto n : sc2)
		cout << n << " ";
	cout << endl;
return 0;
}
