#include "Products.h"

Products::Products( long int code, string word )
{
    barcode = code;
    name = word;
}

void Products:: setCode()
{
    scanner();
}

long int Products:: getCode() const
{
    return barcode;
}

void Products:: scanner()
{

    cout << "Enter name of Product: " ;
    getline( cin >> ws , name);

    cout << "Enter the barcode : ";
    cin >> barcode ;

    cout << "\n~~~~~~~~~~~~~~\n " ;

}

void Products:: printer()
{
         cout << "Product name: " << name << endl
         << "Barcode = " <<  getCode()  << endl;
}
