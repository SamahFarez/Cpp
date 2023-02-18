#include <iostream>
using namespace  std;

int main()
{
    int i=0,N,dev=0;

      cout << "Enter your number: ";
      cin >> N;

        if(N<=500){

    while(i++,i<N){

            if(N%i==0){ dev=dev+i; }}

    if(dev==N){cout << "\nThe number is perfect!!\n";}

    else {cout << "\nThe number is not perfect!!\n";}}

        else{cout << "\nPlease make sure the number is N<=500!!"; }


    return 0;
}
