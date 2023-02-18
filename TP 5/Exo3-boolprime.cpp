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
int main()
{
        int N;

        cout << "Enter a number: ";
        cin >> N;

        cout << "Checking if your number is prime or not ..." ;
        cout << "\nResult is: " << prime(N);

        cout << "\nP.S: '0' means *False* and '1' means *True*";

    return 0;
}
