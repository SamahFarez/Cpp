#ifndef FRESHFOOD_H
#define FRESHFOOD_H

#include "Products.h"

class FreshFood : public Products
{
public:
    FreshFood();
    FreshFood( int long cd, string wd, float kg = 0, float  price = 0);
    float getPriceKg();
    float getweight();

    void scanner();
    void printer();

    ~FreshFood()
    {
        cout << "\n";
    }


private:

    float weight;
    float pricePerkg;

};



#endif // FRESHFOOD_H_INCLUDED
