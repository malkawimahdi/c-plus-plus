#include <iostream>
#include <cstdlib>

int main(int argc, const char* argv[]) {

	srand(time(NULL));

	//Random whole number up to 20.
	int answer = std::rand() % 20;

	switch (answer){ 

	case 1:
		std::cout << "It Is Certain" << std::endl;
		break;

	case 2:
		std::cout << "It Is Decidedly So" << std::endl;
		break;

	case 3:
		std::cout << "Without a Doubt" << std::endl;
		break;

	case 4:
		std::cout << "Yes Definitely" << std::endl;
		break;

	case 5:
		std::cout << "You May Rely on It" << std::endl;
		break;

	case 6:
		std::cout << "As I See It, Yes" << std::endl;
		break;

	case 7:
		std::cout << "Most Likely" << std::endl;
		break;

	case 8:
		std::cout << "Outlook is Good" << std::endl;
		break;

	case 9:
		std::cout << "Yes." << std::endl;
		break;

	case 10:
		std::cout << "Signs Point to Yes" << std::endl;
		break;

	case 11:
		std::cout << "Reply is Hazy, Try Again" << std::endl;
		break;

	case 12:
		std::cout << "Try Asking Later" << std::endl;
		break;

	case 13:
		std::cout << "Better Not Tell You" << std::endl;
		break;

	case 14:
		std::cout << "Cannot Predict Now" << std::endl;
		break;

	case 15:
		std::cout << "Concentrate" << std::endl;
		break;

	case 16:
		std::cout << "Don't Count on it" << std::endl;
		break;

	case 17:
		std::cout << "My Reply is NO" << std::endl;
		break;

	case 18:
		std::cout << "My Sources Say No" << std::endl;
		break;

	case 19:
		std::cout << "Very Doubtful" << std::endl;
		break;

	case 20:
		std::cout << "..." << std::endl;
		break;

	default:
		std::cout << "Try Again." << std::endl;
		break;
	}

	std::cout << "MAGIC 8-BALL" << std::endl;

	return 0;
}