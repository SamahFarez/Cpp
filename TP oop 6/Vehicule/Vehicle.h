#ifndef VEHICLE_H_INCLUDED
#define VEHICLE_H_INCLUDED

#include <iostream>
using namespace std;

class Vehicle
{

public:
    Vehicle( long double =0, double =0 );
    void setdata();
    double getPrice();
    double getMile();


    void print();

private:
    long double price;
    double mileAge;


};

#endif // VEHICLE_H_INCLUDED
