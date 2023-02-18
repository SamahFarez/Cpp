#include "Bike.h"

Bike :: Bike( long double p, double m, int c, int g, string co,string w, double t)  : Vehicle( p, m)
{

        cylinders=c;
        gears=g;
        cooling=co;
        wheel=w;
        tank=t;

}
void  Bike ::setdata()
{
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout  << "Number of cylinders= " ;
    cin >> cylinders;
    cout << "Number of gears = ";
    cin >> gears;
    cout << "Cooling type  = " ;
    getline( cin >> ws,  cooling );
    cout << "Wheel type : ";
    getline( cin >> ws,  wheel );
    cout << "Fuel tank size = " ;
    cin >> tank;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

}

int Bike ::  getCyl()
{
    return cylinders;
}

int Bike ::  getGear()
{
    return gears;
}

string Bike ::  getCool()
{
    return cooling;
}

string  Bike ::  getWheel()
{
    return wheel;
}

double Bike ::  getTank()
{
    return tank;
}

void Bike ::  print()
{
    cout << endl << "This is a Bike!! " << endl;
    Vehicle :: print();
    cout  << "Number of cylinders= "  << getCyl() << " cylinder(s)" << endl
          << "Number of gears = " << getGear() << " gear(s)" << endl
          << "Cooling type  = " << getCool() << endl
          << "Wheel type : " << getWheel() << endl
          << "Fuel tank size = " << getTank() << " inche(s) " << endl;
}
