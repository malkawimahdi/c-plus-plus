#include <iostream>
#include <vector>

//Challenge #1
/* Take an array of integers and partition it so that all the even integers in the array precede all the odd integers in the array. Your solution must take linear time. */

void sortArray(std::vector<int>& vector) {
	
	std::vector<int> vectorEven;
	std::vector<int> vectorOdd;

	//Takes O(n) time, as it is going through vector.
	for (const auto& i : vector) {
		if (i % 2 == 0) {
			vectorEven.push_back(i);

		}

		else {
			vectorOdd.push_back(i);

		}
	}

	for (const auto& i : vector) {
		vector.pop_back();
	}

	//Takes O(n) time, as it is going through vector.
	for (const auto& i : vectorEven) {
		vector.push_back(i);
	}

	//Takes O(n) time, as it is going through vector.
	for (const auto& i : vectorOdd) {
		vector.push_back(i);
	}

	// The amoritsed time complexity is O(n) + O(n) + O(n) = O(n).
}


int main() {

	std::vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
	v.push_back(9);
	v.push_back(10);
	v.push_back(11);
	v.push_back(12);

	std::cout << "Before: " << std::endl;
	for (const auto& i : v) {
		std::cout << i << std::endl;
	}

	sortArray(v);

	std::cout << "=============================" << std::endl;

	std::cout << "After: " << std::endl;
	for (const auto& i : v) {
		std::cout << i << std::endl;
	}

	return 0;
}