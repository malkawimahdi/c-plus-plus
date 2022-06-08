#include "profile.h"

#include <iostream>

int main() {

	Profile mahdi("Mahdi", 30, "London", "UK", "He/Him");

	mahdi.add_hobby("Programming");
	mahdi.add_hobby("C++");

	std::cout << mahdi.view_profile();

	return 0;
}