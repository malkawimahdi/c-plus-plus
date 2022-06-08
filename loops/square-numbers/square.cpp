#include <iostream>

int main() {

	int i = 0;
	int square = 0;
	int userInput = 0;
	std::cout << "Please Enter a Number: " << std::endl;
	std::cin >> userInput;

	std::cout << "Here Are All The Square Numbers Leading Up To Your Input: " << std::endl;
	while (i <= userInput) {
		square = i * i;
		std::cout << square << std::endl;
		++i;
	}
}