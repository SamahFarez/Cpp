#include<iostream>
#include<math.h>

using namespace std;

int bin(int n)
{
    int b=0,i=0,j=1,M,t=-2;
    double c;
    int m=n;

    while(n>0)
    {
        n=(n/2);
        b=(n%2);

        if(b==0)
        {
            if(n/2==n)
            {
                c=c/10;
                i++;
            }
            else
            {
                c=c/100;
                i++;
            }
        }
        else
        {
            c=c/10+b;
            i++;
        }
    }

    c=c*pow(10,i);



    return c;
}

int main()
{
    int N,s;

    cout << "Enter a number: ";
    cin >> N;



    cout << "Binary: " << bin(N);

    return 0;
}
