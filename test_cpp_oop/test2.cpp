#include<iostream>

using namespace std;

bool F1(char S1[], char S2[])
{
    int i=0;

    while(true)
    {
        if(S1[i]==S2[i])
        {
            i++;
        }
        else {
            return false;
        }
    }
    return true;
}

int F2(int num)
{
    int sum=0;
    if(num==1)
    {
        return 1;
    }
    else if(num>=2)
    {
        sum=num+F2(num-1);

    }
    return sum;

}



int main()
{
    string S1,S2;
    char s1,s2;
    int i=0;

    cout << "Enter first string: ";
    cin >> S1;
     cout << "Enter second string: ";
    cin >> S2;

    int s=S1.length();

    for(int i=0; i<4 ; i++)
        s1=S1[i];
    s2=S2[i];
    cout <<"Result : " << F1(s1,s2);

    cout << "P.S: 1 is true and 0 is false !";
    //============================
    int N;
    cout << "Enter a number: ";
    cin >> N;

    cout  << "The sum is: " << F2(N);

    //=================================







    return 0;
}
