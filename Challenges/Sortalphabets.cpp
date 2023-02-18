#include<iostream>

using namespace std;
int main()
{

    int S,i,j;

    cout << "Enter size: ";
    cin >> S;

    char A[S];

    for(i=0;i<S;i++)
        {
            cout << "Enter Here: ";
            cin >> A[i];
        }


    for(j=0;j<S;j++)
    {

        for(i=0;(i+1)<S;i++)
        {
            if(toupper(A[i])> toupper(A[i+1]))
            {
                swap(A[i],A[i+1]);
            }

        }
    }

    for(j=0;j<S;j++)
    {
        cout << A[j] << "  ";
    }


    return 0;
}
