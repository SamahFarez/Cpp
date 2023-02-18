#include<iostream>
using namespace std;
int main()
{
    string A,n;
    int s=0,i,S,j=0;

    cout << "Enter your text: ";
    getline(cin>> ws, A);

    S=A.length();

    A[S]=' ';

    for(i=0;i<=S;i++)
    {
        if(A[i]==' ')
        {
            s+=1;
        }
    }

    string N[s];

    for(i=0;i<=S;i++)
    {
        if(A[i]!=' ')
        {
            n+=A[i];
        }

        else
        {
            N[j]=n;
            j++;
            n.clear();
        }
    }

      cout << "Array= " ;

    for(i=0;i<s;i++)
    {
        cout<< N[i] << "  ";
    }

    return 0;
}
