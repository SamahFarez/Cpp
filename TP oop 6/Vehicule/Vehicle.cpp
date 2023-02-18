#include "Vehicle.h"

Vehicle :: Vehicle(long double p, double m )
{
    price=p;
    mileAge=m;

}

void Vehicle:: setdata()
{
        cout << "********New vehicle!!:********" << endl;
        cout << "Set Price: ";
        cin >> price;
        cout <<"Set mileAge: ";
        cin >> mileAge;
}

double Vehicle :: getPrice()
{
    return price;
}

double  Vehicle :: getMile()
{
    return mileAge;
}


void Vehicle :: print()
{
    cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~" << endl
         << "Price = " << getPrice() << " DZD " << endl
         << "Mile Age = " << getMile() << " mile(s)" << endl;
}
