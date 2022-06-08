#include "profile.h"	

#include <iostream>

Profile::Profile(std::string name, int age, std::string city, std::string country, std::string pronouns) :
	_name(name), _age(age), _city(city), _country(country), _pronouns(pronouns) {}

std::string Profile::view_profile() {
	std::string bio = "Name: " + _name;
	bio += "\nAge: " + std::to_string(_age);
	bio += "\nPronouns: " + _pronouns;

	std::string hobby_string = " \n Hobbies: \n";

	for (std::string hobby : hobbies) {
		hobby_string += " - " + hobby + "\n";
	}

	return bio + hobby_string;
}

void Profile::add_hobby(std::string new_hobby) {
	hobbies.push_back(new_hobby);
}