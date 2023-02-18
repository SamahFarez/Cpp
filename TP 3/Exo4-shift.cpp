#include<iostream>
using namespace std;
int main()
{
    int i,j,V,p,n=0,b,a;
    int A[10],AA[11];



     for(i = 0 ; i < 10 ; i++ )
    {
        cout << "Enter your number: ";
        cin >> A[i];

        AA[i]=A[i];
    }

   /*   l:  cout << "\nEnter V between 0 and 9: ";
        cin >> V;

        if(V<=10 && V>=0)
        {
            for(i = 0 ; i < 10 ; i++ )
            {
                if(A[i]==V)
                {

                    for(j = i ; j<10 ; j++ )
                    {
                        a=A[j+1];

                        A[j+1]= A[j];

                        A[j]=a;
                    }

                }
            }

        }
        else {
            cout << "Make sure the V is between 0 and 10!!";
            goto l;
        }

      cout << endl;

         for(i = 0 ; i < 9 ; i++ )
    {
        cout << A[i] << "  ";
    }
*/
//=================================

        cout << "\nEnter the position: ";
        cin >> p;

        cout << "\nEnter the number: ";
        cin >> n;

        AA[p]=n;

              for(i = 11 ; i > p ; i-- )
              {
                  b=AA[i];
                  AA[i+1]=AA[i];
                  AA[i+1]=b;

              }

    for(i = 0 ; i < 11 ; i++ )
    {
        cout << AA[i] << "  ";
    }

    return 0;
}
