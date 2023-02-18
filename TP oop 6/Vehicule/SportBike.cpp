#include "SportBike.h"

SportBike :: SportBike( long double p, double m, int c, int g, string co,string w, double t , string mo)  : Bike(p,m,c,g,co,w,t)
{
    model=mo;

}
void  SportBike :: setMod()
{
    cout <<  "Set model: " ;
    getline( cin >> ws,  model);
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

string SportBike :: getModel()
{
    return model;
}


void SportBike :: print()
{
    Bike:: print();
    cout << "Model : " << getModel()<< endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

}
