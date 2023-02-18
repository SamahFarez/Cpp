#include"Test.h"
 // Farez Samah Ikram
// S1G4

Product :: Product()
{
    name="none";
    price=0;
    quantity=0;
}
Product :: Product( string s, float p, int q  )
{
    name=s;
    price=p;
    quantity=q;
}

float Product:: Product:: getprice()
{
    return price;
}
int Product:: getquantity()
{
    return quantity;
}
string Product:: getname()
{
    return name;
}

void Product::  setprice(float a)
{
    price=a;
}

void Product:: setquantity(int b)
{
    quantity=b;
}
void Product:: setname(string n)
{
    name = n;
}

void Product:: print()
{
    cout << "Product: " << name << endl;
    cout << "Quantity: " << quantity << endl;
}
