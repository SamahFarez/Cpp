#include"test.h"
int Publication ::  n=0;

Publication :: Publication( string t, float p, float *s, int num )
{
    title=t;
    price=p;
    sales=s;
    n=num;
}


void  Publication :: inputData()
{
    cout << "Enter title: ";
    cin >> title;
    cout << "Enter price: ";
    cin >> price;
    cout << "Enter number of sales : ";
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cout << "Enter sale number " << i << " : " ;
        cin >> sales[i];
    }
}

void Publication :: print()
{
    cout << "\nTitle:" << title
         << "\nPrice:" << price ;
   for(int i=0; i<n; i++)
    {
        cout << "\nSale number " << i << " : " << sales[i] ;

    }

}

bool Publication :: operator<( Publication& P)
{
    double sum1, sum2;
    for(int i=0; i<n; i++)
    {
        sum1+=sales[i];
        sum2=P.sales[i];
    }

    if(sum1/n<sum2/P.n)
        return true;
    else return false;


}




