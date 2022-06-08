//
// Created by mahdimalkawi on 21/01/2022.
//

#ifndef DIABETESTRACKER_DIABETESTRACKER_H
#define DIABETESTRACKER_DIABETESTRACKER_H

class diabetesTracker{
private:
    //Private member attributes.
    float _ketones;
    float _bloodSugar;

public:
    diabetesTracker(float k, float b);

    //Getters for ketones and blood sugar.
    float ketones () const;
    float bloodSugar() const;

    //Prints the object data to command line.
    void print(diabetesTracker &diabetesObject);
};

#endif //DIABETESTRACKER_DIABETESTRACKER_H
