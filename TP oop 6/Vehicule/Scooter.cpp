#include "Scooter.h"

Scooter :: Scooter(long double p, double m, int c, int g, string co,string w, double t , string mo) : Bike(p,m,c,g,co,w,t)
{
        model=mo;
}

void  Scooter :: setMod()
{
    cout <<  "Set model: " ;
    getline( cin >> ws,  model);
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

string Scooter :: getModel()
{
    return model;
}


void  Scooter :: print()
{
    Bike:: print();
    cout << "Model : " << getModel()<< endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

}
