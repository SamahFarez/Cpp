#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED


// Farez Samah Ikram
// S1G4
#include<iostream>
using namespace std;


class Product
{
public:

    Product();
    Product( string , float , int );

    float getprice();
    int getquantity();
    string getname();

    void setprice(float);
    void setquantity(int );
    void setname(string );

    void print();


    ~Product();



private:

    string name;
    float price;
    int quantity;


};


#endif // TEST_H_INCLUDED
