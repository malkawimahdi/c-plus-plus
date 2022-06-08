//
// Created by mahdimalkawi on 21/01/2022.
//

#include "diabetesTracker.h"
#include <iostream>

//Using initializers for constructor.
diabetesTracker::diabetesTracker(float k, float b) : _ketones(k), _bloodSugar(b) {};

//Implementation for getter methods in .cpp file.
 float diabetesTracker::ketones() const{return _ketones;}
 float diabetesTracker::bloodSugar() const{return _bloodSugar;}

 //Implementation for object method to print out object data to command line.
void diabetesTracker::print(diabetesTracker &diabetesObject){
    std::cout << "Ketones: " << diabetesObject.ketones() << std::endl;
    std::cout << "Blood Sugar: " << diabetesObject.bloodSugar() << std::endl;
}

