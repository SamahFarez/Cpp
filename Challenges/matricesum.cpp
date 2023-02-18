#include<iostream>

using namespace std;
int main()
{
    int i,j,Sum;
    int MX[3][3];

    for(j=0;j<3;j++)
   {
        for(i=0;i<3;i++)
    {
        cout << "\nEnter a number of row " << j+1 << ": ";
        cin >> MX[j][i];
    }
   }

    int S[3][1];

        cout << "{";

     for(j=0;j<3;j++)
   {
       Sum=0;

        for(i=0;i<3;i++)
        {
        Sum=Sum+MX[j][i];
        }

    S[j][1]=Sum;

    cout << "{"<< S[j][1] << "}";
   }
        cout << "}";

    return 0;
}
