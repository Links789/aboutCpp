#include <iostream>

int main(){
	int values,sum;

	while(std::cin >> values){
		sum += values;
	}

	std::cout << "The sum is " << sum << std::endl;

	return 0;

}
