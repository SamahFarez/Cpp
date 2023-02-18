#include<iostream>

using namespace std;

int main()
{
    string n;
    int N,S,i;

    cout << "Enter: ";
    getline(cin, n);

    S=n.length();

    for(i=0;i<S;i++)
    {
        if(n[i]==' ')
        {
            cout << ' ';
            continue;
        }
        else
        {
            if(tolower(n[i])=='z')
            {
            N=int(n[i])-25;
            }

            else
            {
            N=int(n[i])+1;
            }
        }
    cout << char(N);
    }

    return 0;
}

/*
    for(i=0;i<5;i=i+2)
        {

            if(n[i]!=maxm && maxm<n[i]){

         maxm=n[i];
        }
        }
        N[c]=maxm;
        c++;

        for(i=0;i<5;i=i+2)
        {
            if(n[i]!=minm && minm>=n[i]){

         minm=n[i];
        }
        }
        N[c]=minm;
        c++;
    }
*/



