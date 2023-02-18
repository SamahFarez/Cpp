#include<iostream>

using namespace std;

int pgcd(int a, int b)
{
    if(a>b)
    {
        int p,i=0;

        if(a==0)
        {
            return b;
        }
        else if ( a==b)
        {
            return a;
        }
        else if(b==0)
        {
            return a;
        }
        else

        {
            p=pgcd(b,a-b);
        }

        return p;
    }
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
