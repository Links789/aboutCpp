#include <iostream>
#include <string>
using namespace std;

struct Person{
	
	Person() = default;
	Person(const string &nam, const string &add) :
					name(nam), address(add) {}

	string name;
	string address;
	
	};
