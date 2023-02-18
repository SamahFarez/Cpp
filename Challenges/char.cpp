#include <iostream>

using namespace std;

int main()
{

    char a;

    cout << "Enter a character: ";
    cin >> a;


    if(int(a)<=90 && int(a)>=65 )
        {
            cout << "It turns to :" << char(a+32);

        }
    else if(int(a)>=97 && int(a)<=122)
        {       cout << "It turns to :" << char(a-32);

        }
    else { cout << "Make sure to enter an alphabet!";
    }
return 0;
}
