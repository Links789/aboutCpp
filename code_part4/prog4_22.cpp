#include <iostream>
using namespace std;

int main(){
	int g;

	for(int i = 0; i < 3 ; i++){
		cin >> g;
		auto res = g > 90 ?  "high pass" :
					g < 60 ? "fail" :
					 g < 75 ? "low pass" :
					 "pass";
	cout << res << endl;

	cout << "<-------------->" << endl;

	if(g > 90) cout << "high pass" << endl;
	else if(g < 60) cout << "fail" << endl;
	else if(g < 75) cout << "low pass" << endl;
	else cout << "pass" << endl;
	}

return 0;
}
