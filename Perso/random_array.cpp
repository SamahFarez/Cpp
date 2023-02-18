#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<sstream>

using namespace std;

int main()
{

    /*int r,j,i,C=0, sizee=1, R[sizee]={6},arr[5]= {1,2,3,4,5};

    srand(time(0));


    for(i=0; i<5; i++)
    {
        r=rand()%5;

        for(j=0; j<=sizee; j++)
        {

            if(r!=R[j])
                C++;

            else
            {
                i--;
                break ;
            }

        }



        if(C==sizee)
        {
            cout << arr[r];

        }
        R[i]=r;
        sizee++;

    }*/

    stringstream  sto;
sto << 6 << 'f' << 7;
cout << sto.str();

    return 0 ;
}
