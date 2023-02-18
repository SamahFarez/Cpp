#ifndef BIKE_H_INCLUDED
#define BIKE_H_INCLUDED

#include "Vehicle.h"

class Bike : public Vehicle
{

public:

    Bike( long double =0, double =0 , int =0 , int =0 , string ="none" ,string  ="none" , double =0 );
    void setdata();
    int getCyl();
    int getGear();
    string getCool();
    string getWheel();
    double getTank();
    void print();


private:

    int cylinders;
    int gears;
    string cooling;
    string wheel ;
    double tank;

};


#endif // BIKE_H_INCLUDED
