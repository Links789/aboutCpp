#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	int n;
	vector<int> text;

	for(int i = 0; i < 6 ; i++){
		cin >> n;
		text.push_back(n);
	}
/*
	for(int c = 0; c < text.size() - 1 ; c++ )
		cout << text[c] + text[c+1] << endl;
*/

	int a = 0;
	int b = text.size() - 1;

	while(a < b){
		cout << text[a] + text[b] << endl;
		a++;
		b--;
	}

return 0;
}
