#include <iostream>
#include <string>
/* The ABACABA sequence is defined as follows: the first iteration is the first letter of the alphabet (a). 
To form the second iteration, you take the second letter (b) and put the first iteration (just a in this case) before and after it, to get aba.
For each subsequent iteration, place a copy of the previous iteration on either side of the next letter of the alphabet.
Here are the first 5 iterations of the sequence:
a
aba
abacaba
abacabadabacaba
abacabadabacabaeabacabadabacaba */

#include <iostream>
#include <chrono>

int main()
{
    char alphabet[] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };

    char letter = NULL;

    int number;

    std::string lastTerm = " ";

    std::cout << "Please Enter a Number: ";
    std::cin >> number;

    //Saves the time for when the high resolution clock began in nanoseconds.
    auto begin = std::chrono::high_resolution_clock::now();

    //Loop to calculate the next letter, in the sequence, you calculate the subsequent letters + current letter + subsequent letters.
    for (int i = 0; i < number; ++i){
        lastTerm = lastTerm + alphabet[i] + lastTerm;
        std::cout << lastTerm << std::endl;
    }

    //Saves the time for when the high resolution clock ends in nanoseconds.
    auto end = std::chrono::high_resolution_clock::now();

    //Calculates the difference in time between the beginning and the end to calculate the time it takes to compute the algorithm.
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);

    //Output elapsed algorithm time.
   std::cout << ("Time measured: %.3f seconds.\n", elapsed.count() * 1e-9);

    return 0;
}