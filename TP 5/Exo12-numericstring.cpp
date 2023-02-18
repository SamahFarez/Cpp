#include<iostream>
#include<string.h>
using namespace std;


int stringnum( string s)
{
    const int mx=s.length()-1;

    int P=0;

    if(mx==-1)
    {
        return P;
    }
    else if (mx>=0)
    {
        P=P+int(s[mx])+stringnum(to_string(s[mx-1]));
    }

}

int main ()
{
    string str;

    cout << "Enter: ";
    cin >> str;

    cout << stringnum(str);

    return 0;
}
