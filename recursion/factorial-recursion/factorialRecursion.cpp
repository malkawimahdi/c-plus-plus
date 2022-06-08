#include <iostream>
#include <algorithm>
/*Function called factorial which takes an integer as an input. The function has
been declared above main as the program is run sequentially therefore it cannot
be after main as it wouldn't be able to call the function.*/
int factorial(unsigned int n) {
    
    if (n > 0){ //Base case to check that n is greater than 0;

    return n * factorial(n-1); //Calls the function based on the value of n.
}
    else {
        return 1; //If the value is 0, then !0 = 1. 
    }
        }

int main(int argc, const char * argv[]) {
   
    std::cout << factorial(5) << std::endl;
    
    return 0;
}
