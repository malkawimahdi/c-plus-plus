#ifndef PROFILE_H
#define PROFILE_H

#include <string>
#include <vector>

class Profile {

private:
	std::string _name;
	int _age;
	std::string _city;
	std::string _country;
	std::string _pronouns;
	std::vector<std::string> hobbies;

public:
	Profile(std::string name, int age, std::string city, std::string country, std::string pronouns = "They/Them");

	std::string view_profile();

	void add_hobby(std::string new_hobby);
};

#endif PROFILE_H
