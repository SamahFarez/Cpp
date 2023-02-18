#include<iostream>
using namespace std;
int main()
{

    int i,j,V,p,n=0,c=0;
    int A[10],AA[10];

     for(i = 0 ; i < 10 ; i++ )
    {


        cout << "Enter your number: ";
        cin >> A[i];
    }

        cout << "Enter V: ";
        cin >> V;

//======================= need this copy
    for(j=0;j<10;j++)
    {
        AA[j]=A[j];
    }
//=================================== move

    for(i = 0 ; i < 10 ; i++ )
    {
        if(A[i]==V)
        {
            for(j=i;j<9;j++)
            {
                A[j]=A[j+1];
            }
        }
    }

    A[9]=0;

    for(i = 0 ; i < 10 ; i++ )
    {
        cout << A[i] << "  ";
    }

//========================================== delete

    cout << "\n\nChoose the position: ";
    cin >> p;

        for(i=p ; i<9 ; i++)
        {
            A[i]=A[i+1];
        }

    cout << endl;

         for(i = 0 ; i < 9 ; i++ )
    {
        cout << A[i] << "  ";
    }


//============================== occurrences

    for(j=0;j<10;j++)
    {
        if(AA[j]==V)
        {
            n++;
        }
    }

    int N[10-n];

    for(i=0;i<10;i++)
    {
        if(AA[i]!=V)
        {
            N[c]=AA[i];
            c++;
        }

    }

    cout << "\n\nWith no occurrences: " << endl;

    for(j=0;j<(10-n);j++)
    {
        cout << N[j] << "  ";
    }

 /*if(A[i]==V)
        {
            for(j=p ; j<9 ;j++)
        {
            A[j]=A[j+1];
        }

        }*/

    return 0;
}
