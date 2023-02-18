#include<iostream>

using namespace std;
int main()
{
    int i,j,c=0,N;

    int T[5];

    for(i=0;i<5;i++)
        {
            cout << "Enter a number: ";
            cin >> T[i];
        }
    cout << "\nEnter N: ";
            cin >> N;

        for(j=0;j<5;j++)
        {
            for(i=0;i<5;i++)
            {
                if(T[j]+T[i]==N)
                {
                    cout <<"(" <<  T[j] << "," << T[i]<< ")" << "  ";
                }

                else
                    cout << "nah";
            }
        }

    return 0;
}
