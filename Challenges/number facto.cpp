#include <iostream>

using namespace std;

int main()
 {  int N,i,E=2,sum=0,F=1,a=1;

    cout << "Enter a number N>1: "; cin >> N;
    i=N;

    if(N>1){

       while(i>=0,i--) { cout << "(1";

            while(E<=i+1){  cout << "+" << E;   E=E+1; }
                cout << ")" ; E=E-i;   }}

    else     {cout << "\nMake sure the number N>1 !!\n";}


    while(a<=N) { sum=sum+a; F=F*sum; a=a+1;}
    cout << "="<< F << endl;
    return 0;
}
