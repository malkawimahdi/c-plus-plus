#include "ufo_functions.h"
#include <iostream>

/* UFO
It’s game time! And by that we mean, it’s time for you to roll up your sleeves and build a game: UFO.

The premise:
Invaders from outer space have arrived and are abducting humans using tractor beams. 
Players must crack the codeword to stop the abduction!
Ok, we’ll admit it’s quite a bit like that classic game, “Hangman”, but with a better premise. 
Plus, building this command-line game was the Codecademy 2019 Software Engineer Internship Backend Programming Challenge */

int main() {

    greet();

    std::string codeword = "codecademy";
    std::string answer = "__________";
    int misses = 0;
    std::vector<char> incorrect;
    bool guess = false;
    char letter;

    while (answer != codeword && misses < 7) {

        display_misses(misses);
        display_status(incorrect, answer);

        std::cout << "\n\nPlease enter your guess: ";
        std::cin >> letter;

        for (int i = 0; i < codeword.length(); i++) {

            if (letter == codeword[i]) {

                answer[i] = letter;
                guess = true;

            }
        }

        if (guess) {
            std::cout << "\nCorrect!\n";
        }

        else {
            std::cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
            incorrect.push_back(letter);
            misses++;
        }
        guess = false;
    }
    end_game(answer, codeword);
}