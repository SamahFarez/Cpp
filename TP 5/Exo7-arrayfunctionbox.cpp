#include<iostream>
using namespace std;


int arrays( int A[], int s );

int main()
{
    int i,n,S;

    cout << "Enter size: ";
    cin >> S;

    int N[S];

    for(i=0; i<S; i++)
    {
        cout << "Enter a number: ";
        cin >> N[i];

    }
     cout << arrays(N,S);

    cout << "\nP.S: '0' means *False* and '1' means *True*";

    return 0;
}

int arrays( int A[], int s )
{
    for(int i=0; i<s; i++)
    {
        if(A[i]>=0 && A[i]<=10)
        {
            cout << "The value is: " << A[i] << endl;
            cout << "Result: ";
            return true;
        }
    }
    return false;
}

