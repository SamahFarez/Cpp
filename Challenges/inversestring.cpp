#include<iostream>

using namespace std;

int main()
{
    string n,N;
    int S,i;

    cout << "Enter: ";
    getline(cin, n);

    S=n.length();

    for(i=0;i<S;i++)
    {
        N[i]=n[(S-1)-i];

        cout << N[i];
    }

    return 0;
}
