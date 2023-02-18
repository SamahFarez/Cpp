#include<iostream>
#include<sstream>

using namespace std;

int main()
{
    string C1,C2;
    int S1,S2,i,b,d,c,a,ac,bd;

    cout << "Enter first number: ";
    cin >> C1;

    S1=C1.length();

    for(i=0;i<S1;i++)
    {
        if(C1[i]=='+' && C1[i+1]=='i')
        {
            int b;
            stringstream sb;
            sb << C1.substr(i+2);
            sb >> b;
        }
         else
            {
                int a;
                stringstream sa;
                sa << C1.substr(i);
                sa >> a;
        }

    }

    cout << "Enter second number: ";
    cin >> C2;

    S2=C2.length();

    for(i=0;i<S2;i++)
    {

        if(C2[i]=='+' && C2[i+1]=='i')
        {
                int d;

                stringstream sd;
                sd << C2.substr(i+2);
                sd>> d;


        }
        else
            {
                int c;
                stringstream sc;
                sc << C2.substr(i);
                sc >> c;
        }

    }

    ac=a+c;
    bd=b+d;


    cout << "The sum is: " << ac << "+i" << bd;






    return 0;
}
