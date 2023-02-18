#include <iostream>

using namespace std;

int main()
{
    int i,j;
    int T[5];

    for(i=0; i<5; i++)
    {
        cout << "Enter a number: ";
        cin >> T[i];
    }

//================================== bubble sort

    for(j=0; j<4; j++)
    {

        for(i=0; i<4; i++)
        {
            if(T[i]>T[i+1])
            {
                swap(T[i],T[i+1]);
            }
        }

    }

//================================== insertion sort (needs to be fixed)
/*
for(j=0; j<4; j++)
    {

        for(i=0; i<4; i++)
        {
            if(T[j]<T[i])
            {
                swap(T[i],T[j]);
            }
        }

    }

*/

    for(i=0; i<5; i++)
    {
        cout << T[i];
    }

    return 0;
}
