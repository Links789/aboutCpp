#include<iostream>

int main(){
	int i = 50,n = 0;

	while(i<=100){
		n = n + i;
		i++;
	}

	std::cout << "The sum of 50 to 100 is " << n << std::endl;

	return 0;

}
