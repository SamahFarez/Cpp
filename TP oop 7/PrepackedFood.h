#ifndef PREPACKEDFOOD_H_INCLUDED
#define PREPACKEDFOOD_H_INCLUDED

#include"Product.h"

class PrepackedFood :  public Product
{

public:
    PrepackedFood()
    {

    }

    float getUnit()
    {
        return unitPrice;

    }

    void scanner()
    {
        cout << "Enter unit price :" << endl;
        cin >> unitPrice;
        cout << "\n~~~~~~~~~~~~~~\n " ;

    }

    void printer()
    {

        cout << endl << "Unit Price = " << getUnit()  << " DZD " << endl;
        cout << endl <<  "\n~~~~~~~~~~~~~~~~~~~~~\n";

    }


    ~PrepackedFood()
    {
        cout << "\n";
    }

private:

    float unitPrice;

};

#endif // PREPACKEDFOOD_H_INCLUDED
