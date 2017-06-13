#include <iostream>
#include <cstring>

int main() {
	
	const int arrSize = 20;

	char flavor[arrSize];
	std::cout << "What's your favorite soda flavor?" << std::endl;
	std::cin.getline(flavor, arrSize);
	strcat(flavor, " soda!"); //Adds " soda!" to your input.

	std::cout << "I love " << flavor;

	return 0;
	
	
}
