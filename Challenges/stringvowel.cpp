#include<iostream>

using namespace std;

int main()
{
    string n;
    int S,i,j=0,t=0;

    cout << "Enter: ";
    getline(cin, n);

       S=n.length();

    for(i=0;i<S;i++)
    {
        n[i]=tolower(n[i]);

        if(n[i]=='a' || n[i]=='e' || n[i]=='i' || n[i]=='o' || n[i]=='u' || n[i]=='y')
        {
            j++;
        }
        else
        {
            t++;
        }
    }

    cout << "Number of vowels is: " << j << endl << "Number of consonants is: " << t ;

    return 0;
}
