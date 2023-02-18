#include<iostream>
using namespace std;
int main()
{
    int a,A,b,B,Z1=10,Z2=1,S1=0,S2=0,c,d,C,x,y;

    cout << "Enter number A: ";
    cin >> A;

    cout << "Enter number B: ";
    cin >> B;

    a=A;

    while(a!=0)
    {

        a=(a/10);

        if(a==0){

        c=A-(x*10);
        }

        else  {

            c=A-(a*10);
        }

        S1+=(c*Z1);

        Z1*=100;
        x=a;
      }

      cout << endl << S1 << endl;


    b=B;

    while(b!=0)

    {

        b=(b/10);

          if(b==0){

        d=B-(y*10);
          }
           else {

           d=B-(b*10);
           }

        S2=S2+(d*Z2);

        Z2=Z2*100;
        y=b;
    }


            C=S1+S2;
    cout << C;



   return 0;
    }


