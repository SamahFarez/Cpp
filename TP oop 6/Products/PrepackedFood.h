#ifndef PREPACKEDFOOD_H
#define PREPACKEDFOOD_H

#include "Products.h"

#include <iostream>
using namespace std;

class PrepackedFood :  public Products
{

public:
    PrepackedFood();
    PrepackedFood(  int long cd, string wd , float unit= 0 );
    float getUnit();

    void scanner();
    void printer();

    ~PrepackedFood()
    {
        cout << "\n";
    }



private:

    float unitPrice;


};

#endif // PREPACKEDFOOD_H_INCLUDED
