#include<iostream>

using namespace std;
int main()
{
    int i,j,S,c=0;

    cout << "Enter the size of array: ";
    cin >> S;

    int T[S];

    for(i=0;i<S;i++)
        {
            cout << "Enter a number: ";
            cin >> T[i];
        }

    for(j=0;j<S;j++)
        {
        c=0;
            for(i=0;i<S;i++)
            {
                    if(T[j]!=T[i])
                    {   c++;
                    }
                    else continue;
            }

        if(c==(S-1))
            {
            cout << T[j]<< " ";
            }
        }

    return 0;
}
