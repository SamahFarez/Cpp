#ifndef FORD_H_INCLUDED
#define FORD_H_INCLUDED

#include"Car.h"

class Ford :  public Car
{

public:
    Ford(long double =650090000, double =56640, double =75330, int =3, int =2 , string = "diezel", string = "Ford");
    void setModel();

    string getModel();
    void print();

private:
    string model;


};

#endif // FORD_H_INCLUDED
