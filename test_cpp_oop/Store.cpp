#include"Store.h"
#include<cstring>
// Farez Samah Ikram
// S1G4

int Store:: nbProducts=0;

Store:: Store( Product P)
{
    products[capacity];

}

void Store::addproduct(const Product& p)
{
    products[nbProducts]=p;
    nbProducts++;

    if( nbProducts == capacity)
    {
        cout << "Full!!";
        return;
    }


}
void Store:: sellProductByName(const string &s, int n)
{
   for(int i=0; i<nbProducts; i++)
   {
    if( strcmp(s, products[nbProducts].getname())==0 )
    {
        products[nbProducts].quantity-= n;
        return;
    }

    cout << "Product not available!!" << endl;
}
}


float Store:: getAveragePrice()
{
    float n=0;
    for(int i=0; i<nbProducts; i++)
   {
       n+=products[nbProducts].price;
   }

   return (n/nbProducts);

}
void Store:: print()
{
    for(int i=0;i<nbProducts; i++)
    products[nbProducts].print();

    cout << "Average price =" << getAveragePrice();

}


