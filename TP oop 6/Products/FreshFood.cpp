#include "FreshFood.h"


FreshFood :: FreshFood()
{
    scanner();

}

FreshFood :: FreshFood( int long cd, string wd, float kg,float  price ) : Products( cd, wd )
{
    pricePerkg = price;
    weight = kg;

}

float FreshFood ::  getPriceKg()
{
    return pricePerkg;
}

float FreshFood ::  getweight()
{
    return weight;
}


void FreshFood :: printer()
{
    Products :: printer();

    cout << endl << "Price per kg = " << getPriceKg()  << " DZD " << endl
         << "Weight = " << getweight() << " kg" << endl
         << "The whole price = " << (float)(getPriceKg()* getweight()) << " DZD " ;
    cout << endl <<  "\n~~~~~~~~~~~~~~~~~~~~~\n";
}

void FreshFood :: scanner()
{
    Products:: scanner();

    cout << "Enter price Per kg :" << endl;
    cin >> pricePerkg;

    cout << "Enter weight kg :" << endl;
    cin >> weight;
    cout << "\n~~~~~~~~~~~~~~\n " ;


}
