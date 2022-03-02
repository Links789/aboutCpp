#include <iostream>

void print_range(int lo, int hi)
{
	if(lo > hi){
		print_range(hi,lo);
		return;
	}
	else{
		for(;lo<=hi;lo++)
			std::cout << lo << std::endl;
	}
}

int main()
{
	int low,high;

	std::cout << "Please enter two numbers: " << std::endl;
	std::cin >> low >> high;
	
	print_range(low,high);
	return 0;
}
