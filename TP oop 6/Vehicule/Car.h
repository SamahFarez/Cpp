#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED

#include "Vehicle.h"


class Car : public Vehicle
{

public:

    Car( long double =0, double =0 , double =0 , int =0 , int =0 ,string = "none") ;

    void setdata();
    double getOwn();

    int getWarr();

    int getSeat();

    string getFuel();

    void print();


private:
    double ownership;
    int warranty;
    int seating;
    string fuel;


};


#endif // CAR_H_INCLUDED
