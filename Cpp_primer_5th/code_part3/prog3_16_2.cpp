#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	string str;
	vector<string> text;

	while(cin >> str)
		text.push_back(str);
	
	for(auto c : text)
		cout << c << endl;
	
return 0;
}
