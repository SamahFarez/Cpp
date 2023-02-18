#include "Car.h"

Car :: Car( long double p, double m, double o, int w, int s,string f) : Vehicle( p, m)
{

        ownership=o;
        warranty=w;
        seating = s;

        if(f=="petrol" || f == "diezel")
        fuel=f;

        else fuel= "not specified";

}

void Car ::  setdata()
{
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout  << "Enter ownership cost : " ;
    cin >> ownership;
    cout << "Enter warranty (by years) : ";
    cin >> warranty;
    cout << "Enter seating capacity : ";
    cin >> seating;
    cout << "Enter fuel type : ";
    getline( cin >> ws, fuel ) ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << endl;


}

double Car ::  getOwn()
{
    return ownership;
}

int  Car ::  getWarr()
{
    return warranty;
}

int  Car ::  getSeat()
{
    return seating;
}

string  Car :: getFuel()
{
    return fuel;
}

void Car ::  print()
{
    cout << endl << "This is a Car!! " << endl;
    Vehicle :: print();

    cout  << "Ownership cost = "  << ownership << " DZD" << endl
          << "Warranty (by years) = " << warranty  << " years" << endl
          << "Seating capacity = " << seating << " seats" << endl
          << "Fuel type : "<< fuel << endl;

}

