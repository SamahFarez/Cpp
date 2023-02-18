#include<iostream>

using namespace std;

int main()
{
    int i,N;

    cout << "Enter a number: ";
    cin >> N;

    cout << "CASE 01\n";

    int U1[N+1]={};
    U1[0]={3};
        i=0;

    while(i<=N){

       U1[i+1]=3*U1[i]+4;
       i=i+1;
    }
    cout << "U(" << N << ")=" << U1[N];

    cout <<"\n==========================";

    cout << "\n\nCASE 02\n";

    int U2[N+1]={};
    U2[0]={1};
    U2[1]={1};
        i=1;

    while(i<=N){

       U2[i+1]=U2[i]+U2[i-1];
       i=i+1;
    }

    cout << "U(" << N << ")=" << U2[N];

    cout <<"\n==========================";

    cout << "\n\nCASE 03\n";

    int U3[N+1]={};
    U3[0]={3};
    U3[1]={2};
        i=1;

    while(i<=N){

       U3[i+1]=(i+1)*U3[i]+(i+2)*U3[i-1]+(i+1);
       i=i+1;
    }

    cout << "U(" << N << ")=" << U3[N];


    return 0;
}
