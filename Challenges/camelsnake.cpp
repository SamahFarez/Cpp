#include<iostream>

using namespace std;

int main()
{
    string n,N;
    int i,S,j;

    cout << "Enter the words: ";
    getline(cin, n);
    N=n;

    S=n.length();

    for(i=0;i<S;i++)
    {
        if(n[i]==' ')
        {
            n[i]='_';
        }
    }

    cout << "Snake_case: " << n << endl;

    for(i=0;i<S;i++)
    {
        if(N[i]==' ')
        {
            i++;
            N[i]=toupper(N[i]);

            for(j=i-1 ;j<S; j++)
            {
                N[j]=N[j+1];
            }
        }
    }
    cout << "CamelCase: " << N << endl;

    return 0;
}
/*

#include<iostream>

using namespace std;

int main()
{
    int i,j,c=0;
    int n[5],N[5];
    for(i=0;i<5;i++)
   {
    cout << "Enter : ";
    cin >> n[i];
}

        for(i=0;i<5;i=i+2)
        {
            N[c]=n[i];
            c++;
        }
         for(j=1;j<5;j=j+2)
        {
            N[c]=n[j];
            c++;
        }



         for(j=0;j<5;j++)
        {   cout << N[j] << "  ";
        }



    return 0;
}

