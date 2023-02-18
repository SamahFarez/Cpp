#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int A[5][3],i,j,sum=0,D=0,D2=0;

    for(size_t i{0}; i<5 ; i++)
        {
            for(size_t j{0}; j<3 ;j++)
                {
                    cout << "Enter elements of raw " << i+1 << endl;
                    cin >> A[i][j];
                }
        }


         for(size_t i{0}; i<5; i++)
        {
            for(size_t j{0}; j<3 ;j++)
                {
                  sum+=A[i][j];

                  if(i==j)
                  {
                      D+=A[i][j];
                  }

                  if(3-j==i)
                  {
                      D2+=A[i][j];
                  }
                }
        }

        cout <<"\nThe sum: " << sum << "\nDiagonal 1: " << D << "\nDiagonal 2: " << D2 ;





    return 0;
}
