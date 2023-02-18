#include<iostream>
using namespace std;


int arrays( int A[], int s )
{
    for(int i=0; i<s; i++)
    {
        if(A[i]>=0 && A[i]<=10)
        {
            return true;
        }

    }
    return false;
}


int main()
{
    int i,n,S;

    cout << "Enter a number: ";
    cin >> S;

    int N[S];

    for(i=0; i<S; i++)
    {
        cout << "Enter a number: ";
        cin >> N[i];

    }
    cout << "Result: " << arrays(N,S) << endl;

    cout << "P.S: '0' means *False* and '1' means *True*";

    return 0;
}
