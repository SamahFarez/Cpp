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
        if(n[i]==n[(S-1)-i])
            {
            continue;
            }
        else
            {
                cout << "False";
                exit(0);
            }
    }

    cout << "True";

    return 0;
}
