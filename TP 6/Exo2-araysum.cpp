#include<iostream>

using namespace std;

int main ()
{
    float tab[3];


    for(int i=0; i<3; i++)
    {
        cout << "Enter: ";
        cin >> tab[i];
    }

    float *p = tab;

    int sum=0;

    for(int i=0; i<3; i++)
    {
        sum+=*(p+i);
    }

    cout << "Sum is: "<< sum << endl;


//================================ method one 3 lines

    cout <<endl <<  "**************************"  << endl;



       float tab2D[3][4],sum2D;
       float *p2D;

       for(int j=0; j<3; j++)
       {
           for(int i=0; i<4; i++)
           {
               cout << "Enter: ";
               cin >> tab2D[j][i];
           }
       }

       for(int j=0; j<3; j++)
       {

           p2D=tab2D[j];

           for(int i=0; i<4; i++)
           {
               sum2D+=*(p2D+i);
           }
       }
       cout << "Sum 2D: " << sum2D;



//=================================== method 2 one line

   cout <<endl <<  "**************************"  << endl;

    float tab2D[3][4],sum2D;

    float *p2D;

    for(int j=0; j<3; j++)
    {
        for(int i=0; i<4; i++)
        {
            cout << "Enter: ";
            cin >> tab2D[j][i];
        }
    }

    p2D=&tab2D[0][0];

    for(int i=0; i<12; i++)
    {
        sum2D+=*(p2D+i);
    }

    cout << "Sum: " << sum2D;

    cout << endl <<  "**************************"  << endl;


    return 0;
}
