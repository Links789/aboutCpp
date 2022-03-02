#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	vector<int> text;
	int nu,sum;

	for(int i = 0 ; i < 6 ; i++){
		cin >> nu;
		text.push_back(nu);
	}
	
	auto a = text.begin();
	auto b = text.end() - 1;

	for(int i = 0 ; i < text.size() ; i++){
		cout << *a + *b << endl;
		++a;
		--b;
	}
return 0;
}
