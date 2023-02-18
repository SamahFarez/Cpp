#include<iostream>
#include<string.h>
using namespace std;


int two_arrays( int A[], int B[], int s )
{
    int nb=0,c=0;
    for(int i=0; i<s; i++)
    {
        if(A[i]>=0 && A[i]<=10)
           {
            nb++;
            B[c]=A[i];
            c++;
           }
    }
    return nb;
}

int main()
{
    int i,n,S,s;

    cout << "Enter size: ";
    cin >> S;

    int N[S],M[S];

    for(i=0; i<S; i++)
    {
        cout << "Enter a number: ";
        cin >> N[i];

    }
    s=two_arrays(N,M,S);

    cout << "Result: " << s << endl;



      cout << "2nd array: " ;

    for(i=0; i<s; i++)
    {
        cout << M[i] << "  ";
    }

    return 0;
}


