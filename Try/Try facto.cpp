#include <iostream>

using namespace std;

int main()
{
    int N,i,E=1,sum=0;

    cout << "Enter a number N>1 : "; cin >> N;
    i=N;

    if(N>1){

       while(i>=0,i--) {

            do {  cout << "+" << E;  E=E+1;
            cout << ")";E=E-i;}
       while(E<=i+1)

                i=i-1; }

    else{          cout << "\nMake sure the number N>1 !!\n";}


    cout << "="<<sum;
    return 0;}

