#include <iostream>
#include <cmath>

int main() {

	double a;
	double b;
	double c;

	std::cout << "Enter a:";
	std::cin >> a;

	std::cout << "Enter b:";
	std::cin >> b;

	std::cout << "Enter c:";
	std::cin >> c;

	double positiveRoot;
	double negativeRoot;

	positiveRoot = (-b + std::sqrt(b * b - 4 * a * c)) / (2 * a);

	negativeRoot = (-b - std::sqrt(b * b - 4 * a * c)) / (2 * a);

	std::cout << " Root 1: " << positiveRoot;
	std::cout << " Root 2: " << negativeRoot;

	return 0;
}