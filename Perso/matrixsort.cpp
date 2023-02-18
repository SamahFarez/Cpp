#include <iostream>

using namespace std;

int main()
{
    int i,j,c=0;
    int T[3][3];


    for(j=0; j<3; j++)
    {

        for(i=0; i<3; i++)
        {
            cout << "Enter a number: ";
            cin >> T[j][i];
        }
    }

//===================================putting matrix in array

    int A[9];

    for(j=0; j<3; j++)
    {

        for(i=0; i<3; i++)
        {
            A[c]=T[j][i];
            c++;

        }
    }

//========================================bubble sort array

    for(j=0; j<8; j++)
    {

        for(i=0; i<8; i++)
        {
            if(A[i]>A[i+1])
            {
                swap(A[i],A[i+1]);
            }
        }

    }

//================================return sorted array to matrix

    c=0;
    for(j=0; j<3; j++)
    {

        for(i=0; i<3; i++)
        {
            T[j][i]=A[c];
            c++;

        }
    }

//================================display matrix

    for(j=0; j<3; j++)
    {

        for(i=0; i<3; i++)
        {
            cout << T[j][i] << "  ";

        }
        cout << endl;
    }

    return 0;
}
