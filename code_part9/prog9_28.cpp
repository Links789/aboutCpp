#include <iostream>
#include <forward_list>
using namespace std;

void func(forward_list<string> st, string s1, string s2){
	auto pr = st.before_begin();
	auto cu = st.begin();
	
	while(cu != st.end() ){
		if(*cu == s1){
			st.insert_after(cu,s2);
			return;
			}
		pr = cu;
		++cu;
		}
	st.insert_after(cu,s2);
	}
