#include<iostream>
#include<cmath>
using namespace std;

int Sum(int n)
{
    int sum=0;
    if(n==1)
    {
        return 1;
    }
    else if(n>1)
    {
        sum=n+Sum(n-1);

        return sum;
    }
    if(n<1)
    {
        sum=n+Sum(n+1);
        return sum;
    }
}

int main()
{
    int N;
    cout << "Enter:";
    cin >>N;
    cout << Sum(N);


    return 0;
}
