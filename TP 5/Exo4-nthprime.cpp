#include<iostream>
#include<cmath>
using namespace std;

bool prime(int n)
{
    int s=sqrt(n);

    for(int i=2;i<=s;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int primeN(int n)
{
    int i,c=0;

    for(i=2;i>0;i++)
    {
        if(prime(i)==true)
        {
            c++;
        }

    if(c==n)
    {
        return i;
    }
    }
}

int main()
{
    int N;

    cout << "Enter the pos: ";
    cin >> N;
    cout <<  "The " << N << "th prime number is: " <<  primeN(N);

    return 0;
}
