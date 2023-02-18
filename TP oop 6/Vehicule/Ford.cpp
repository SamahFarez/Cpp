#include "Ford.h"

Ford :: Ford(long double p, double m, double o, int w, int s, string f , string mo): Car(p,m,o,w,s,f)
{
    model=mo;

}

void Ford :: setModel()
{
    cout <<  "Set model: " ;
    cin >> model;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

}
string Ford :: getModel()
{
    return model;
}

void Ford :: print()
{
    Car:: print();
    cout << "Model : " << getModel() << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

}


