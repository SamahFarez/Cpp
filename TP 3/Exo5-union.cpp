#include <iostream>

using namespace std;

int main()
{
    int i=0,n=0,t=0, j=0,S1,S2,s=0;

     cout << "Enter the size of array 1: ";
    cin >> S1;
    cout << "Enter the size of array 2: ";
    cin >> S2;

    int a[S1], b[S2],c[S1+S2];

    for(i=0;i<S1;i++)
        {
            cout << "Enter a number: ";
            cin >> a[i];
        }

    for(j=0;j<S2;j++)
        {
            cout << "Enter a number: ";
            cin >> b[j];
        }


    for( t=0; 0<=t && t<S1; t++)
        {
            c[t]=a[t];
        }


    for( t=0; 0<=t && t<S2; t++)
        {

        c[t+S1]=b[t];
        }

    while(s<(S1+S2))
        {
            cout << c[s] << "  ";
        s++;

        }


    return 0;
}
