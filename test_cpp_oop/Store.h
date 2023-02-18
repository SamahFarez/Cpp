#ifndef STORE_H_INCLUDED
#define STORE_H_INCLUDED

// Farez Samah Ikram
// S1G4

#include"Test.h"

class Store
{
public:
    Store();
    Store( Product );


    ~Store();
    void addproduct(const Product&);
    void sellProductByName(const string&, int);
    float getAveragePrice();
    void print();




private:
    int capacity;
    Product *products;
    static int nbProducts;

};

#endif // STORE_H_INCLUDED
