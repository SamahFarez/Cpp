#include <iostream>

using namespace std;

int main()
{
    int i,j,S=0;
    int D[4][4];


    //enter elements

    for(j=0;j<4;j++)
    {
        for(i=0;i<4;i++)
        {
            cout << "Enter ";
            cin>> D[i][j];

        }
    }

    //sum

    for(j=0;j<4;j++)
    {
        for(i=0;i<4;i++)
        {
            if(i==j)
            {
                S+=D[i][j];
            }
            else continue;
        }
    }

      cout <<"The sum = " << S;



 return 0;
}
