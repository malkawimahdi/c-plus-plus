#include <iostream>


int main() {

	int gryffindor = 0;
	int hufflepuff = 0;
	int ravenclaw = 0;
	int slytherin = 0;

	int answer1 = 0;
	int answer2 = 0;
	int answer3 = 0;
	int answer4 = 0;

	std::cout << "The Sorting Hat Quiz!" << std::endl;

	std::cout << "Q1) When I'm dead, I want people to remember me as: " << std::endl;
	std::cout << "1) The Good" << std::endl;
	std::cout << "2) The Great" << std::endl;
	std::cout << "3) The Wise" << std::endl;
	std::cout << "4) The Bold" << std::endl;

	std::cin >> answer1;

	if (answer1 == 1) {
		hufflepuff += 1;
	}

	else if (answer1 == 2) {
		slytherin += 1;
	}

	else if (answer1 == 3) {
		ravenclaw += 1;
	}

	else if (answer1 == 4) {
		gryffindor += 1;
	}

	else {
		std::cout << "Invalid Input";
	}

	std::cout << "Q2) Dawn or Dusk?" << std::endl;
	std::cout << "1) Dawn" << std::endl;
	std::cout << "2) Dusk" << std::endl;

	std::cin >> answer2;

	if (answer2 == 1) {
		gryffindor += 1;
		ravenclaw += 1;
	}

	else if (answer2 == 2) {
		hufflepuff += 1;
		slytherin += 1;
	}

	else {
		std::cout << "Invalid Input";
	}

	std::cout << "Q3) Which kind of instrument most pleases your ear? " << std::endl;
	std::cout << "1) The Violin" << std::endl;
	std::cout << "2) The Trumpet" << std::endl;
	std::cout << "3) The Piano" << std::endl;
	std::cout << "4) The Drum" << std::endl;

	std::cin >> answer3;

	if (answer3 == 1) {
		slytherin += 1;
	}

	else if (answer3 == 2) {
		hufflepuff += 1;
	}

	else if (answer3 == 3) {
		ravenclaw += 1;
	}

	else if (answer3 == 4) {
		gryffindor += 1;
	}

	else {
		std::cout << "Invalid Input";
	}


	std::cout << "Q4) Which road tempts you the most? " << std::endl;
	std::cout << "1) The wide, sunny grass lane" << std::endl;
	std::cout << "2) The narrow, dark, lantern - lit alley" << std::endl;
	std::cout << "3) The twisting, leaf - strewn path through the woods" << std::endl;
	std::cout << "4) The cobbled stree lined (ancient buildings)" << std::endl;

	std::cin >> answer4;

	if (answer4 == 1) {
		hufflepuff += 1;
	}

	else if (answer4 == 2) {
		slytherin += 1;
	}

	else if (answer4 == 3) {
		gryffindor += 1;
	}

	else if (answer4 == 4) {
		ravenclaw += 1;
	}

	else {
		std::cout << "Invalid Input";
	}

	std::string house;
	int max = 0;

	if (gryffindor > max) {
		max = gryffindor;
		house = "Gryffindor";
	}

	if (hufflepuff > max) {
		max = hufflepuff;
		house = "Hufflepuff";
	}

	if (ravenclaw > max) {
		max = ravenclaw;
		house = "Ravenclaw";
	}

	if (slytherin > max) {
		max = slytherin;
		house = "Slytherin";
	}

	std::cout << house << std::endl;
}