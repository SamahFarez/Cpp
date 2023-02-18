#include "Audi.h"

Audi :: Audi(long double p, double m, double o, int w, int s,string f , string mo): Car(p,m,o,w,s,f)
{
    model=mo;


}

void Audi :: setModel()
{
    cout <<  "Set model: " ;
    getline( cin >> ws,  model);
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

}
string Audi :: getModel()
{
    return model;
}

void Audi :: print()
{
    Car:: print();
    cout << "Model : " << getModel() << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

}
