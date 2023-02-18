#include<iostream>

using namespace std;

int main ()
{
    int i=0,n=0,j=1,t=0;
    int N[10];

    for(i=0;i<10;i++)
        {
            cout << "Enter a number: ";
            cin >> N[i];
        }

    //=======================

       for(i=0;i<10;i++)

        {  t=0;
            for(j=0;j<10;j++)


            {
                if(N[i]==N[i+j])
                {
                    t++;

                }

            }
        cout << "Number of " << N[i] << " is " << t << endl;


        }

    return 0;
}
