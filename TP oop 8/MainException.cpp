#include<iostream>
#include"DivideByZeroException.h"
#include"OverflowException.h"
#include"MathException.h"
#include"RootOfNegativeException.h"
#include<cmath>



using namespace std;

void devide(int a =0, int b=1)
{
    try
    {
        if(b==0)
        {
            throw DevideByZeroException();

        }

        double result=(double)a/b;

        cout << "The result: " << result;
    }

    catch (DevideByZeroException &DevideByZeroException)
    {
        cout << "\nException occured ! " << DevideByZeroException.what();

    }
}

void root(int a =0)
{
    try
    {
        if(a<0)
        {
            throw RootOfNegativeException();

        }

        double result=sqrt(a);

        cout << "The result: " << result;
    }

    catch (RootOfNegativeException &RootOfNegativeException)
    {
        cout << "\nException occured \a! " << RootOfNegativeException.what();

    }
}

void over(int a =0)
{
    try
    {
        if(a>5000000)
        {
            throw OverflowException();

        }

        cout << "No exception (not large enough)\nHere your number : " << a;
    }

    catch (OverflowException &OverflowException)
    {
        cout << "\nException occured ! " << OverflowException.what();

    }
}

int main()
{
    int a,b;
    while(true)
    {
        cout << "Another Try!\n";

        cout << "Enter num: ";
        cin >> a;
        cout << "Enter den: ";
        cin >> b;
        devide(a,b);
        cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~";


        cout << "\nEnter a number to calculate the root: ";
        cin >> a;
        root(a);
        cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~";


        cout << "\nEnter a large number: ";
        cin >> a;
        over(a);

        cout << "\n********************\n";

        system("cls");

    }
}

