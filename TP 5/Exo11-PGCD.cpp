#include<iostream>
#include<string.h>
using namespace std;

int pgcd(int a, int b)
{
    int p,i=0;

        if(a==b || b==0)
        {
            return a;
        }
        else if(b<a || b!=0)
        {
            p=pgcd(b,a%b);

        }
    return p;
}

int main ()
{
    int m,n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Enter m: ";
    cin >> m;

    cout << "PGCD(" << n  << "," << m << ") = " <<  pgcd(n, m);

         return 0;
}
