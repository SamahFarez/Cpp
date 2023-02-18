#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a,b,c,x,x1,x2,delta;

    cout << "We write the equation as ax^2+bx+c=0\n"<< "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >>b;
    cout << "Enter c: ";
    cin >> c;


    if(a==0){
        if(b!=0){

            if(c!=0){
                x=-c/b;
                cout << "The solution is\n" << "x=" << x;}

            if(c==0){
                cout << "The solution is:\n"<< "x=0";   }
        }

        if(b==0){
            cout << "Math Error!";  }
    }

    {if(a!=0){
            if(b==0){
                if(c!=0){
                    x=c/a;
                    cout << "The solution is:\n" << "x=" << x; }
                if(c==0){
                    cout << "Math Error!"; }        }
            if(b!=0)
                if(c==0){
                    x=-b/a;
                    cout << "The solution is:\n"<< "x=0\n"<< "x="<< x;     }
                if(c!=0){
                    delta=pow(b,2)+4*a*c;
                    if(delta>0){
                        x1=(pow(b,2)+sqrt(delta))/2*a;
                        x2=(pow(b,2)-sqrt(delta))/2*a;
                        cout << "The solution is:\n"<< "x=" << x1 << endl << "x=" << x2;    }
                    if(delta==0){
                        x=-b/(2*a);
                        cout << "The solution is:\n" << "x=" << x ;}
                    if(delta<0){
                        cout << "There are no solutions in R !";}
                }
    }
    }



    return 0;
}
