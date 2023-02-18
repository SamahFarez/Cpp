#ifndef PRODUCT_H_INCLUDED
#define PRODUCT_H_INCLUDED


#include <iostream>
using namespace std;


class Product
{
public:
    Product()
    {
        scanner();
    }

    void setCode();
    long int getCode() const;

    virtual void scanner()
    {
        cout << "Enter Name :" << endl;
        cin >> name;
         cout << "Enter BarCode :" << endl;
        cin >> barcode;
        cout << "\n~~~~~~~~~~~~~~\n" ;
    }

    virtual void printer()
    {
        cout << "Name: " << name << endl
             << "BarCode: " << barcode<< endl;
    }


    int record ()
    {
        int a;

            cout << "Please type the next article \n"
                 << "0: No more article" << endl
                 << "1: Fresh food" << endl
                 << "2: Prepacked article" << endl;
            cin >> a;
        return a;
    }

    virtual ~Product()
    {
        cout << "\n";
    }

private:
    long int barcode;
    string name;
};

#endif // PRODUCT_H_INCLUDED
