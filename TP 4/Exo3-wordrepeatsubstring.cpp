#include<iostream>
#include<string.h>

using namespace std;

/*string add(char a, string b)
{
    string c;
    c=a+b;
    return c;
}*/
int main()
{
    string n,A;
    int i,O=0,s,S;

    cout << "Enter your text: ";
    getline(cin,A);

    cout << "Enter the word: ";
    cin >> n;

    S=A.length();
    s=n.length();
    A=' '+A+' ';

       for(i=0;i<S; i++)
    {
        if(A.substr(i,s)==n)
           {
               if(A[i+s]==' ')
               {
                 O++;
               }
           }
    }

        cout << "The word was repeated: "<< O << " times";

    return 0;
}
