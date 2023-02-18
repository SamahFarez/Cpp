#include <iostream>

using namespace std;

int main()
{
    int S=0,i=1,N,j=0,R=0,n,t=0;
    int A[n]={};


    cout << "Enter a number to continue, a 0 to stop: ";
        cin>>N;
        A[0]=N;

    while(N!=0){
        cout << "Enter a number to continue, a 0 to stop: ";
        cin>>N;
        A[i]=N;
            R++;
            i++;
            }

    while(j<=R){
          N=A[t];
          S=S+N;
          j++;
          t++;
 }

        cout<< "\nThe sum is:" << S << endl;

    return 0;
}
