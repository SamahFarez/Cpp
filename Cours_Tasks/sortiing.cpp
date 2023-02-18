#include<iostream>

using namespace std;
int main()
{

    int S,i,j,t=-1,p=0;

//================= entering size and numbers

    cout << "Enter size: ";
    cin >> S;

    char A[S],N[S];


    for(i=0;i<S;i++)
        {
            cout << "Enter Here: ";
            cin >> A[i];
        }

//========================== the operation

    for(j=0;j<S;j++)
    {

        for(i=0;(i+1)<S;i++)
        { do
           {

            if(int(A[i])> int(A[i+1]))
                {
                N[p]=A[i+1];
                p++;
                }

             else
                {
                    N[t]=A[i];
                t--;
                }

                  }
                  while(-t<p);
        }
    }

//========================= printing

    for(j=0;j<S;j++)
    {
        cout << N[j] << "  ";
    }

    return 0;
}
