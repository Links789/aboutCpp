#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main(){
	int ia[] = {0,1,1,2,3,5,8,13,21,89};
	vector<int> vec(ia,end(ia));
	list<int> li(vec.begin(),vec.end());
	
	auto it = li.begin();
	
	while(it != li.end()){
		if(*it % 2 == 0){
			++it;
			cout << *it << " ";
			}
		else
			it = li.erase(it);
		}
	cout << endl;
	
	for(auto v = vec.begin() ; v != vec.end() ; ++v){
		if(*v % 2 == 0)
			v = vec.erase(v);
		else{
			++v;
			cout << *v << " ";
			}
		}
	cout << endl;
	
	return 0;
	}
