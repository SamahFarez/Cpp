#include <iostream>

using namespace std;

int main()
{
    int N,i=0;
    cout << "Enter a positive number: ";
    cin >>N;

    while(i<=N)
      { if(i%3==0)  { cout << "fizz\n";}
        else if(i%5==0)  { cout << "buzz\n";}
        else if(i%7==0)  { cout << "fizzbuzz\n";}
    i=i+1;}

    return 0;}
