#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> nu{1,2,3,4,5,6,7,8};

	for(auto &i : nu){
		i % 2 == 0 ?  : i = i * 2;
		cout << i << " ";
	}
	cout << endl;
return 0;
}
