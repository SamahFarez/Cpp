#include<iostream>

using namespace std;

int main()
{
    string n,N;
    char a;
    int S,i,j;

    cout << "Enter: ";
    getline(cin, n);

    S=n.length();



    for(i=0;i<S/2;i++)
    {
       swap(n[i],n[(S-1)-i]);
    }

      for(j=0;j<S;j++)
    {

        cout << n[j];
    }

    return 0;
}
