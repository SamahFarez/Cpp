#include <iostream>

using namespace std;

int main()
{
    int A[n]={};

     cout << "Enter a number: ";
        cin >> A[0];

    maxm=A[0];
    minm=A[0];

    while(i<n){

        cout << "Enter a number: ";
        cin >>  A[i];

        if( A[i]> maxm){ maxm= A[i];}
        if( A[i]<minm){ minm= A[i];}
        i++;
    }

    cout << "\nThe max is: " << maxm << endl;
    cout << "The min is: " << minm << endl;

    return 0;
}

