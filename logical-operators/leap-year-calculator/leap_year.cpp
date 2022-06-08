#include <iostream>

int main() {

	int year;

	std::cout << "Please Enter a Year: " << std::endl;
	std::cin >> year;

	if (year > 1000 && year < 9999) {
		
		if (year % 4 == 0) {

			if (year % 100 == !0 && year % 400 == 0) {
				std::cout << year << " Is A Leap Year.";
			}

			else {
				std::cout << year << " Is Not a Leap Year";
			}
		}

		else {
			std::cout << year << " Is Not a Leap Year";
		}
	}

	else {
		std::cout << "Invalid Year";
	}

}