#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	vector<int> text;

	while(cin >> n)
		text.push_back(n);
	
	for(auto c : text)
		cout << c << endl;

return 0;
}
