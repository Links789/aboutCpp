#include <iostream>
#include <string>
using namespace std;

class HasPtr {
		public:
			HasPtr(const string &s = string() ): 
				ps(new string(s), i(0) { }
			
		private:
			string *ps;
			int i;
	};
