#include <iostream>

using namespace std;

int nb_occ(string s, char c)
{
    int occ=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]== c )
            occ++;
    }

    return occ;
}

int nb_occ2(char s[], char c)
{
    int occ=0, i=0;

    while(s[i]!='\0')
    {
        if(s[i]==c)
            occ ++;

        i++;
    }

    return occ;
}

int nb_occ3(char *s, char c)
{
    int occ=0,i=0;

    while(*(s+i)!='\0')
    {
        if(*(s+i)==c)
            occ ++;

        i++;
    }

    return occ;
}

int main()
{
    string S;

    char ch;
    /*
        cout << "Enter: ";
        cin >>  S;

        cin >> ch;

        cout << "Results: " << nb_occ(S,ch);

//===================================================

        char SS[50];

        cout << "Enter: ";
        cin.getline(SS, 50);

        cout << "Enter char: ";
        cin >> ch;

        cout << "Results: " << nb_occ2(SS,ch);

    */
//===================================================

    char SS[50];

    cout << "Enter: ";
    cin.getline(SS, 50);

    cout << "Enter char: ";
    cin >> ch;

    cout << "Results: " << nb_occ3(SS,ch);

    return 0;
}


