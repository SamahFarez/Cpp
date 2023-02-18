#include<iostream>
#include<math.h>

using namespace std;

long bin(int n)
{
    double b=0,i=0,c=0,m;

    while(n>0)
    {
        m=n;
        n=(n/2);
        b=m-(int(n)*2);

            c=c/10+b;
            i++;
    }
    c=c*pow(10,i-1);

    return c;
}

int main()
{
    double N,s;

    cout << "Enter a number: ";
    cin >> N;

    cout << "Binary: " << bin(N);

    return 0;
}
