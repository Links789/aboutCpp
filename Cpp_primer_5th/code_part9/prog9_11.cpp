#include <iostream>
#include <vector>
using namespace std;


int main(){
	
	vector<int> vec1;  	// 0
	vector<int> vec2(3); //0,0,0
	vector<int> vec3(4,3); // 3,3,3,3
	vector<int> vec4{3,3,3,3}; //,3,3,3
	vector<int> vec5(other_vec);
	vector<int> vec6(other_vec.begin(),other_vec.end());
	
	return 0;
	}
