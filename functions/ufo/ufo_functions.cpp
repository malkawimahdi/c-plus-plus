#include "ufo_functions.h"

void greet() {

	std::cout << "=============" << std::endl;
	std::cout << "UFO: The Game" << std::endl;
	std::cout << "=============" << std::endl;
	std::cout << "Instructions: Save Your Friend From Alien Abduction by Guessing The Letters In the Codeword." << std::endl;
	
}

void end_game(std::string answer, std::string codeword) {
	if (answer == codeword) {
		std::cout << "Hooray! You Saved The Person and Earned a Medal of Honour!" << std::endl;
	}

	else {
		std::cout << "Oh No! The UFO Just Flew Away with Another Person!" << std::endl;
	}
}


void display_misses(int misses) {

    if (misses == 0 || misses == 1) {

        std::cout << "                 .                            \n";
        std::cout << "                 |                            \n";
        std::cout << "              .-\"^\"-.                       \n";
        std::cout << "             /_....._\\                       \n";
        std::cout << "         .-\"`         `\"-.                  \n";
        std::cout << "        (  ooo  ooo  ooo  )                   \n";
        std::cout << "         '-.,_________,.-'    ,-----------.   \n";
        std::cout << "              /     \\        (  Send help! ) \n";
        std::cout << "             /   0   \\      / `-----------'  \n";
        std::cout << "            /  --|--  \\    /                 \n";
        std::cout << "           /     |     \\                     \n";
        std::cout << "          /     / \\     \\                   \n";
        std::cout << "         /               \\                   \n";

    }
    else if (misses == 2) {

        std::cout << "                 .                            \n";
        std::cout << "                 |                            \n";
        std::cout << "              .-\"^\"-.                       \n";
        std::cout << "             /_....._\\                       \n";
        std::cout << "         .-\"`         `\"-.                  \n";
        std::cout << "        (  ooo  ooo  ooo  )                   \n";
        std::cout << "         '-.,_________,.-'    ,-----------.   \n";
        std::cout << "              /  0  \\        (  Send help! ) \n";
        std::cout << "             / --|-- \\      / `-----------'  \n";
        std::cout << "            /    |    \\    /                 \n";
        std::cout << "           /    / \\    \\                    \n";
        std::cout << "          /             \\                    \n";
        std::cout << "         /               \\                   \n";

    }
    else if (misses == 3) {

        std::cout << "                 .                            \n";
        std::cout << "                 |                            \n";
        std::cout << "              .-\"^\"-.                       \n";
        std::cout << "             /_....._\\                       \n";
        std::cout << "         .-\"`         `\"-.                  \n";
        std::cout << "        (  ooo  ooo  ooo  )                   \n";
        std::cout << "         '-.,_________,.-'    ,-----------.   \n";
        std::cout << "              /--|--\\        (  Send help! ) \n";
        std::cout << "             /   |   \\      / `-----------'  \n";
        std::cout << "            /   / \\   \\    /                \n";
        std::cout << "           /           \\                     \n";
        std::cout << "          /             \\                    \n";
        std::cout << "         /               \\                   \n";

    }
    else if (misses == 4) {

        std::cout << "                 .                            \n";
        std::cout << "                 |                            \n";
        std::cout << "              .-\"^\"-.                       \n";
        std::cout << "             /_....._\\                       \n";
        std::cout << "         .-\"`         `\"-.                  \n";
        std::cout << "        (  ooo  ooo  ooo  )                   \n";
        std::cout << "         '-.,_________,.-'    ,-----------.   \n";
        std::cout << "              /  |  \\        (  Send help! ) \n";
        std::cout << "             /  / \\  \\      / `-----------' \n";
        std::cout << "            /         \\    /                 \n";
        std::cout << "           /           \\                     \n";
        std::cout << "          /             \\                    \n";
        std::cout << "         /               \\                   \n";

    }
    else if (misses == 5) {

        std::cout << "                 .                            \n";
        std::cout << "                 |                            \n";
        std::cout << "              .-\"^\"-.                       \n";
        std::cout << "             /_....._\\                       \n";
        std::cout << "         .-\"`         `\"-.                  \n";
        std::cout << "        (  ooo  ooo  ooo  )                   \n";
        std::cout << "         '-.,_________,.-'    ,-----------.   \n";
        std::cout << "              / / \\ \\        (  Send help! )\n";
        std::cout << "             /       \\      / `-----------'  \n";
        std::cout << "            /         \\    /                 \n";
        std::cout << "           /           \\                     \n";
        std::cout << "          /             \\                    \n";
        std::cout << "         /               \\                   \n";

    }
    else if (misses == 6) {

        std::cout << "                 .                            \n";
        std::cout << "                 |                            \n";
        std::cout << "              .-\"^\"-.                       \n";
        std::cout << "             /_....._\\                       \n";
        std::cout << "         .-\"`         `\"-.                  \n";
        std::cout << "        (  ooo  ooo  ooo  )                   \n";
        std::cout << "         '-.,_________,.-'    ,-----------.   \n";
        std::cout << "              /     \\        (  Send help! ) \n";
        std::cout << "             /       \\      / `-----------'  \n";
        std::cout << "            /         \\    /                 \n";
        std::cout << "           /           \\                     \n";
        std::cout << "          /             \\                    \n";
        std::cout << "         /               \\                   \n";

    }

}

void display_status(std::vector<char> incorrect, std::string answer) {
    for (const auto& it : incorrect) {
        std::cout << " " << it;
    }

    std::cout << "Codeword: " << std::endl;
    for (const auto& it : answer) {
        std::cout << " " << it;
    }
}