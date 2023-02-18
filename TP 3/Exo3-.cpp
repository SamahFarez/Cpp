#include <iostream>

using namespace std;

int main()
{
    string str,word;
    int c=0,ctr=0,S,w;
    cout << "String: ";
    getline(cin,str);

    cout << "Word";
    cin >> word;

    S=str.length();
    w=word.length();



    for(int i=0; i<S; i++)
    {
        if(str[i]==word[0])
        {
            for(int j=0; j<w; j++)
            {
                if(str[i+j]==word[j])
                {
                    ctr++;
                }
            }
        }

        if(ctr==w)
        {
            c++;
        }
    }


    cout << "Occ: " << c;



    return 0;
}
