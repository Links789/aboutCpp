#include <iostream>
#include <vector>
#include <string>
//#include <cctype>
using namespace std;

int main(){
	string words;
	vector<string> text;

	for(int i = 0;i < 3;i++){
		cin >> words;
		text.push_back(words);
	}
	
	for(auto &c : text){
		for(auto &c2 : c)
			c2 = toupper(c2);
	}
	
	for(auto &c3 : text)
		cout << c3 << endl;

return 0;
}
