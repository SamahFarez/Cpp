#include "PrepackedFood.h"

PrepackedFood :: PrepackedFood()
{
   scanner();
}

PrepackedFood :: PrepackedFood ( int long cd, string wd ,  float unit ) : Products ( cd, wd)
{
  unitPrice = unit;

}

float PrepackedFood :: getUnit()
{
    return unitPrice;
}

void  PrepackedFood :: printer()
{
   Products :: printer();
    cout << endl << "Unit Price = " << getUnit()  << " DZD " << endl;
    cout << endl <<  "\n~~~~~~~~~~~~~~~~~~~~~\n";


}


void PrepackedFood :: scanner()
{
    Products:: scanner();

    cout << "Enter unit price :" << endl;
    cin >> unitPrice;
    cout << "\n~~~~~~~~~~~~~~\n " ;

}
