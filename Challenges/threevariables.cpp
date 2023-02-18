#include <iostream>

using namespace std;

int main()
{
    int m,n,k,r,S=0,i=0;


        cout << "Enter the first positive number n: ";
        cin>>n;
        cout << "Enter the second positive number m>n : ";
        cin>>m;
        cout << "Enter the third number k>1: ";
        cin>>k;

        r=n;

        if(n<m){
            while(r>=n && r<=m){
                if(r%k==0){
                        S=S+r; i++; r++;
                }
                else    r++;
                }

        cout << "\nThere are " << i << " numbers\nTheir sum is: " << S;
        }

        else {
                cout << "Next time make sure to enter valid values!";
        }


    return 0;
}

