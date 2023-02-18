#include <iostream>

using namespace std;

int main()
{
    int i,j,S=0,p=0,u=0;
    int D[2][2];
    double sub;


    //enter elements

    for(j=0;j<2;j++)
    {
        for(i=0;i<2;i++)
        {
            cout << "Enter ";
            cin>> D[i][j];

        }
    }

    //sum

    for(j=0;j<2;j++)
    {
        for(i=0;i<2;i++)
        {
            for(int r=0;r<D[i][j];r++)
                {
            sub=D[i][j]-2;

                if(sub == 0)
            { p++;
            }

                else if(sub !=0)
            { u++;
            }
                else continue;
                }
        }
    }

      cout <<"Pairs" << p << endl << "Umpairs" << u;



 return 0;
}
