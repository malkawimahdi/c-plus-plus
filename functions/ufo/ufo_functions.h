#ifndef UFO_FUNCTIONS_H
#define UFO_FUNCTIONS_H

#include <string>
#include <iostream>
#include <vector>

void greet();

void end_game(std::string answer, std::string codeword);

void display_misses(int misses);

void display_status(std::vector<char> incorrect, std::string answer);


#endif UFO_FUNCTIONS_H
