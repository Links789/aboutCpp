#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	string s1 = "aaaaa",
		   s2 = "bbbbb";
	
	if(s1 == s2)
		cout << "same" << endl;
	else if(s1 > s2)
		cout << s1 << " > " << s2 << endl;
	else
		cout << s1 << " < " << s2 << endl;

return 0;
}
