#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a,b,c,x;
    float delta=pow(b,2)-4*a*c;
    float x1=(-b+sqrt(delta))/(2*a);
    float x2=(-b-sqrt(delta))/(2*a);

    cout << "We write the equation as ax^2+bx+c=0\n"<< "Enter a: "; cin >> a;
    cout << "Enter b: "; cin >>b;
    cout << "Enter c: "; cin >> c; cout << endl;

    if(a!=0){
            if(b==0){
                if(c!=0){x=(-c)/a; cout << "The solution is:\n" << "x=" << sqrt(x) << endl <<"x=" << -sqrt(x) << endl; }
                if(c==0){cout << "Math Error!" << endl; }        }

            if(b!=0){
                if(c==0){x=(-b)/a; cout << "The solutions are:\n"<< "x=0\n"<< "x="<< x << endl; }
                if(c!=0){
                    if(delta>0){ cout << "The solutions are:\n"<< "x=" << x1 << endl << "x=" << x2 << endl;    }
                    if(delta==0){x=(-b)/(2*a); cout << "The solution is:\n" << "x=" << x << endl;}
                    if(delta<0){ cout << "There are no solutions in R !"<< endl;}       }}}
    if(a==0) {
            if(b!=0){
                if(c!=0){x=(-c)/b; cout << "The solution is\n" << "x=" << x << endl;}
                if(c==0){cout << "The solution is:\n"<< "x=0" << endl;   }}

            if(b==0){cout << "Math Error!" << endl;  }
        }
    return 0;}



