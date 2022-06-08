#include <string>

void asterisk(std::string word, std::string& text, int &i) {

    for (int k = 0; k < word.size(); ++k) {

        text[i + k] = '*';
    }
}

void bleep(std::string word, std::string& text) {

    //Stay in bounds, without "- word.size(), it could possibly be out-of-bounds
    for (int i = 0; i < text.size() - word.size(); ++i) {

        int match = 0;

        for (int j = 0; j < word.size(); ++j) {

            if (text[i + j] == word[j]) {

                ++match;

            }
        }

        if (match == word.size()) {

            asterisk(word, text, i);

        }
    }
}