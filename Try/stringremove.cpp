#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int i,s;
    string N,M;

    cout << "Enter your string: ";
    getline(cin ,N);

    s=N.length();

    for(i=0;i<s;i++)
    {
        if((N[i]>=65 && N[i]<=90)|| (N[i]>=97 && N[i]<=122) || N[i]==32 )
        {
            M+=N[i];
        }
    }
    cout << "New string: " << M;



    return 0;
}
