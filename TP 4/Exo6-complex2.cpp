#include<iostream>
#include<sstream>

using namespace std;


struct complex
{
    int real;
    int image;

}x,y,z;

int main()
{

    int S1,S2,i,b,d,c,a,ac,bd;

    cout << "Enter first number real part: ";
    cin >> x.real;
    cout << "Enter first number img part: ";
    cin >> x.image;

    cout << "Enter first number real part: ";
    cin >> y.real;
    cout << "Enter first number img part: ";
    cin >> y.image;


    z.real=x.real+y.real;
    z.image=x.image+y.image;

    if(z.image<0)
    {
        cout << "The sum is: " << z.real << z.image << "i";

    }
    else
    {

    cout << "The sum is: " << z.real << "+" << z.image << "i";
    }






    return 0;
}
