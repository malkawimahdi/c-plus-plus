#include <iostream>
#include <string>

/* For the purpose of today's challenge,
a Roman numeral is a non-empty string of the characters M, D, C, L, X, V, and I, each of which has the value 1000, 500, 100, 50, 10, 5, and 1.
The characters are arranged in descending order, and the total value of the numeral is the sum of the values of its characters.
For example, the numeral MDCCXXVIIII has the value 1000 + 500 + 2x100 + 2x10 + 5 + 4x1 = 1729.

The challenge is to add the values of the string, by not directly using ints. */
bool compareNumeral(const int a, const int b) {

	return a > b;
}

int main() {
	
	//Using string variable to store value.
	std::string M = "1000";
	std::string D = "500";
	std::string C = "100";
	std::string L = "50";
	std::string X = "10";
	std::string V = "5";
	std::string I = "1";

	//Converting string to num.
	int Mnum = std::stoi(M);
	int Dnum = std::stoi(D);
	int Cnum = std::stoi(C);
	int Lnum = std::stoi(L);
	int Xnum = std::stoi(X);
	int Vnum = std::stoi(V);
	int Inum = std::stoi(I);

	//Comparison for roman numerals.
	std::cout << compareNumeral(Mnum, Dnum) << std::endl;

	std::cout << Mnum + Dnum + Cnum + Cnum + Xnum + Xnum + Vnum + Inum + Inum + Inum + Inum;
	return 0;
}