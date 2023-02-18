#include <iostream>

using namespace std;

int main()
{
    int i=0,n,t=0,r=0,maxm,minm;

     cout << "Enter the size of array: ";
        cin >>n;

    int A[n]={};
    int N[n]={};

         while(i<n){

        cout << "Enter a number: ";
        cin >>  A[i];
        i++;
         }

        maxm=A[0];

        while(t<n){

            while(r<n){

        if( A[i]> maxm){ maxm= A[i];}
        r++;
    }

            maxm=N[t];
            cout << N[t] << endl;

            maxm!=A[i];

            t++;

    }

    cout << "\nThe max is: " << maxm << endl;

    return 0;
}


