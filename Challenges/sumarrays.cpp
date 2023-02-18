#include <iostream>

using namespace std;

int main()
{
    int S=0,i=0,n;



    cout << "Enter array's size: ";
        cin>>n;
    int A[n]={};

    while(i<n){
        cout << "Enter a number: ";
        cin>>A[i];
        S=S+A[i];
            i++;
            }

        cout<< "\nThe sum is: " << S << endl;

    return 0;
}

