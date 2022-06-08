#include <iostream>
#include <vector>
#include <string>
/* Whale Talk
Takes a phrase like "turpentine and turtles" and translate it into its “whale talk” equivalent, "uueeieeauuee".

There are a few simple rules for translating text to whale language:

There are no consonants. Only vowels excluding the letter y.
The u‘s and e‘s are extra long, so we must double them.
Once we have converted text to the whale language, the result is sung slowly, as is custom in the ocean.

Write a whale.cpp program that accomplishes this translation using loops and vectors. */
int main() {

    std::string input = "Turpentine and Turtles.";

    std::vector<char> vowels;

    vowels.push_back('a');
    vowels.push_back('e');
    vowels.push_back('i');
    vowels.push_back('o');
    vowels.push_back('u');

    std::vector<char> whale_talk;

    for (int i = 0; i < input.size(); i++) {

        for (int j = 0; j < vowels.size(); j++) {

            if (input[i] == vowels[j]) {

                whale_talk.push_back(input[i]);

                if (input[i] == 'e' || input[i] == 'u') {

                    whale_talk.push_back(input[i]);

                }

            }

        }

    }

    for (int k = 0; k < whale_talk.size(); k++) {

        std::cout << whale_talk[k];

    }

    std::cout << std::endl;

    return 0;
}

