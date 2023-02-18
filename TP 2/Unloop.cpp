#include<iostream>

using namespace std;

int main()
{
    int i,N;

    cout << "Enter a number: ";
    cin >> N;

    cout << "CASE 01\n";

    int U1=3;
        i=0;

    while(i<N){

       U1=(3*U1)+4;

       i++;
    }
    cout << "U(" << N << ")=" << U1;

    cout <<"\n==========================";

    cout << "\n\nCASE 02\n";

    int a,U21,U22;
    U21=1;
    U22=1;
        i=1;


    while(i<N){

       a=U22;
       U22=U22+U21;
       U21=a;

       i++;
    }

    cout << "U(" << N << ")=" << U22;

    cout <<"\n==========================";

    cout << "\n\nCASE 03\n";

    int U31,U32,b;
    U31=3;
    U32=2;
        i=1;

    while(i<N){

       b=U32;
       U32=(i+1)*U32+(i+2)*U31+(i+1);
       U31=b;

       i++;
    }

    cout << "U(" << N << ")=" << U32;


    return 0;
}
