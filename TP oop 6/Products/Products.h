#ifndef PRODUCTS_H
#define PRODUCTS_H

#include <iostream>
using namespace std;

class Products
{
    public:
        Products( long int= 000000 , string= " no name " );
        void setCode();
        long int getCode() const;
        void scanner();
        void printer();
        ~Products()
        {
            cout << "\n";
        }


    private:
        long int barcode;
        string name;
};

#endif // PRODUCTS_H
