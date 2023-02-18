#include <iostream>

using namespace std;

int main()
{
    int i,j,r,c,n,SUM=0,sum=0,C,R;

    //size of 2d array

     cout << "rows: "; cin >>r;
     cout << "columns: "; cin >>c;

   int A[r][c];

   //inputting elements

   for(j=0;j<r;j++)
    { cout << "Raw number: " << j+1 << endl;
        for(i=0;i<c;i++)
            {

            cout << "Enter a number: "; cin >>n;

            A[j][i]=n;

            }
   }
   j=0;
   i=0;

   //sum of column
    {

   cout << "Which column you wanna sum? "; cin >>C;

        for(i=0;i<c;i++)
            {
                 SUM=SUM+A[i][C-1];
            }

   cout<< "\nSum of column " << C << " is: " << SUM << endl;

   SUM=0;}

   //sum of row
   {
   cout << "Which row you wanna sum? "; cin >>R;

   for(j=0;j<r;j++){ sum=sum+A[R-1][j];}

   cout<< "\nSum of row " << R << " is: " << sum << endl;

   sum=0;}











    return 0;
}
