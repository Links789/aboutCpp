#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	vector<int> text(10,2);

	for(auto &i : text){
		i *= 2;
		cout << i << endl;
	}

return 0;
}
