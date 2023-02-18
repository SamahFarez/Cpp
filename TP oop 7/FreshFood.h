#ifndef FRESHFOOD_H_INCLUDED
#define FRESHFOOD_H_INCLUDED

#include "Product.h"

class FreshFood : public Product
{
public:
    FreshFood()
    {

    }

    void scanner()
    {
        cout << "Enter price Per kg :" << endl;
        cin >> pricePerkg;
        cout << "Enter weight kg :" << endl;
        cin >> weight;
        cout << "\n~~~~~~~~~~~~~~\n" ;
    }

    void printer()
    {

        cout << endl << "Price per kg = " << pricePerkg << " DZD " << endl
             << "Weight = " << weight << " kg" << endl
             << "The whole price = " << (float)(pricePerkg* weight) << " DZD " ;
        cout << endl <<  "\n~~~~~~~~~~~~~~~~~~~~~\n";
    }



    virtual ~FreshFood()
    {
        cout << "\n";
    }


private:

    float weight;
    float pricePerkg;

};

#endif // FRESHFOOD_H_INCLUDED
