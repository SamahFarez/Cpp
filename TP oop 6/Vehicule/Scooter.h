#ifndef SCOOTER_H_INCLUDED
#define SCOOTER_H_INCLUDED

#include "Bike.h"

class Scooter : public Bike
{

public:
    Scooter( long double =577000, double = 320459, int =7, int =4, string ="liquid" ,string = "alloys", double =50 , string ="Scooter");
    void setMod();
    string getModel();
    void print();

private:
    string model;


};

#endif // SCOOTER_H_INCLUDED
