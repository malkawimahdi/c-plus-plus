#include <iostream>
#include <stdlib.h>

/* Write a rock_paper_scissors.cpp program that:

Prompts the user to select either Rock, Paper, Scissors.
Instructs the computer to randomly select either Rock, Paper, Scissors.
Compares the user’s choice and the computer’s choice and determine the winner.
Informs the user who the winner is. */
int main(int argc, const char* argv[]) {

    srand(time(NULL));

    int computer = rand() % 3 + 1;

    int user = 0;

    std::cout << "====================\n";
    std::cout << "Rock Paper Scissors!\n";
    std::cout << "====================\n";

    std::cout << "1) Rock\n";
    std::cout << "2) Paper\n";
    std::cout << "3) Scissors\n";

    std::cout << "Shoot! : ";

    std::cin >> user;

    if (user == computer) {
        std::cout << "Draw!" << std::endl;
    }

    else if (user == 1 && computer == 2) {
        std::cout << "You Lost :(" << std::endl;
    }

    else if (user == 2 && computer == 1) {
        std::cout << "You Won :)" << std::endl;
    }

    else if (user == 2 && computer == 3) {
        std::cout << "You Lose :(" << std::endl;
    }

    else if (user == 3 && computer == 2) {
        std::cout << "You Won :)" << std::endl;
    }

    else if (user == 1 && computer == 3) {
        std::cout << "You Won :)" << std::endl;
    }

    else if (user == 3 && computer == 1) {
        std::cout << "You Lost :(" << std::endl;
    }

    else {
        std::cout << "Invalid Input";
    }

    return 0;
}