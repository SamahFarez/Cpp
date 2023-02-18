#ifndef AUDI_H_INCLUDED
#define AUDI_H_INCLUDED

#include"Car.h"

class Audi :  public Car
{

public:
    Audi(long double =40000000, double =22608 , double =14300 , int =5 , int =5 ,string = "petrol" , string = "Audi");
    void setModel();

    string getModel();
    void print();


private:
    string model;


};

#endif // AUDI_H_INCLUDED
