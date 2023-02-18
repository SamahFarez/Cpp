#include<iostream>

using namespace std;
int main()
{
    string n,A;
    int i,j,O=0,s,S;

    cout << "Enter your text: ";
    getline(cin,A);

    cout << "Enter the word: ";
    cin >> n;


    S=A.length();
    s=n.length();
    A[S]=' ';


    for(i=0; i<S; i++)
    {

        if(A[i]==n[0])
        {
            for(j=0; j<s; j++)
            {
                if(A[i+j]==n[j])
                {
                    O++;

                }
            }

            if(O==s)
                o=O;
        }


            cout << "The word was repeated: "<< o << " times";



        return 0;

    }
