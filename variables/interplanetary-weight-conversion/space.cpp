#include <iostream>

//Question
/* Little Mac is an interplanetary space boxer, who is trying to win championship belts for 
various weight categories on other planets within the solar system. 
Write a space.cpp program that helps him keep track of his target weight by:

It should ask him what his earth weight is.
Ask him to enter a number for the planet he wants to fight on.
It should then compute his weight on the destination planet. */

int main() {

	double weight;

	int planet;

	std::cout << "What is your Earth Weight?";
	std::cin >> weight;

	std::cout << "What is the Planet you Want to Fight On?";
    std::cout << "Planet 1: Mercury " << std::endl;
    std::cout << "Planet 2: Venus " << std::endl;
    std::cout << "Planet 3: Mars " << std::endl;
    std::cout << "Planet 4: Jupiter " << std::endl;
    std::cout << "Planet 5: Saturn " << std::endl;
    std::cout << "Planet 6: Uranus " << std::endl;
    std::cout << "Planet 7: Neptune " << std::endl;

	std::cin >> planet;

    switch (planet) {
    case 1:
        std::cout << weight * 0.38;
        break;
    case 2:
        std::cout << weight * 0.91;
        break;
    case 3:
        std::cout << weight * 0.38;
        break;
    case 4:
        std::cout << weight * 2.34;
        break;
    case 5:
        std::cout << weight * 1.06;
        break;
    case 6:
        std::cout << weight * 0.92;
        break;
    case 7:
        std::cout << weight * 1.19;
        break;

    default:
        std::cout << "Earth Weight: " << weight;
    }
    return 0;
}