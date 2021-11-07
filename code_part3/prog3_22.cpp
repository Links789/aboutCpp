#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	vector<string> text;
	text.push_back("qqqqqqqqqq qqqqqqqqq qqqqqqqqqq");
	text.push_back("");
	text.push_back("rrrrrr  rrrrrr rrrrrr rrrrrrr");

	for(auto i = text.begin() ; i != text.end() && !i->empty() ; ++i){
		for(auto &n : *i){
			if(isalpha(n))
				n = toupper(n);
		}
	}

	for(auto &i : text)
		cout << i << endl;

return 0;
}
