#include <iostream>
#include <algorithm>

int fibonacciNumber(unsigned int n) {
    
    if (n > 1) {
        
return fibonacciNumber(n-1) + fibonacciNumber(n-2);
    
}
    else {
        
        return n;
    }
}

int main(int argc, const char * argv[]) {
 
    std::cout << fibonacciNumber(30) << std::endl;
    
    return 0;
}
