#include <iostream>

using namespace std;

int main()
{
    char A,a,e,i,y,o;

    cout << "Enter a character: ";
    cin >> A;

    if (A=='a'||A=='e'||A=='i'||A=='o'||A=='y')
         cout << "Your character in a vowel";

    else
        cout << "Your character in a consonant";

    return 0;
}
