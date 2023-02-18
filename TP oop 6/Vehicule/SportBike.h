#ifndef SPORTBIKE_H_INCLUDED
#define SPORTBIKE_H_INCLUDED

#include "Bike.h"

class SportBike : public Bike
{

public:
    SportBike(long double =450878700, double =56680, int =6, int =9, string ="air" ,string = "spokes", double =72 , string ="SportBike");

    void setMod();

    string getModel();


    void print();

private:
    string model;

};


#endif // SPORTBIKE_H_INCLUDED
