#include<iostream>

using namespace std;
int main()
{

    int S,i,t,p1,p2,p=0,n=0;
    double c,Sum,high,low,a;


    cout << "Enter the size of array: ";
    cin >> S;

    double T[S];

    for(i=0;i<S;i++)
        {
            cout << "Enter a number: ";
            cin >> T[i];
        }

    for(i=0;i<S;i++)
        {
            cout << T[i] << " ";
        }
//================================

     for(i=0;i<S;i++)
        {
            Sum+=T[i];
            c++;
        }

        cout << "\nThe sum is: " << Sum << endl << "The average is: " << Sum/c << endl;

//===================================

    high=T[0];

    for(t=0;t<S;t++)
    {

        if(high<T[t])
        {
            high=T[t];
            p1=t;
        }
    }

    low=T[0];

     for(t=0;t<S;t++)

     {
         if(low>T[t])
        {
            low=T[t];
            p2=t;
        }
    }

    cout << "\nThe highest value is: " << high << "\nIt's position is " << p1 << "\n\nThe lowest value is: " << low << "\nIt's position is " << p2 << endl;

//=========================

        for(i=0;i<(S/2);i++)
        {
            a=T[i];
            T[i]=T[(S-1)-i];
            T[(S-1)-i]=a;
        }

        cout << "\nThe reverse is: ";

        for(i=0;i<S;i++)
        {
            cout << T[i] << "  ";
        }
//===========================

        double TPOS[S],TNEG[S];

        for(i=0;i<S;i++)
        {

            if(T[i]>=0)
            {

                TPOS[p]=T[i];
                p++;
            }
            else
            {
                TNEG[n]=T[i];
                n++;
            }

        }

    cout << "\nPositive numbers :";

    for (i=0;i<p;i++)
    {
        cout << TPOS[i] << "  ";
    }
     cout << "\nNegative numbers :";

     for (i=0;i<n;i++)
    {
        cout << TNEG[i] << "  ";
    }


    return 0;
}
