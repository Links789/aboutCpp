#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;

int main(){
	list<int> Li(6,2);
	vector<double> Vd1(Li.begin(), Li.end());
	for(auto i : Vd1)  cout << i <<  " " ;
	cout << endl;
	
	vector<int> Vec(6,3);
	vector<double> Vd2(Vec.begin(), Vec.end());
	for(auto i : Vd2) cout << i << " ";
	cout << endl;
	
	return 0;
	}
