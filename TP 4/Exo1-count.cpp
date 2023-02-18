#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    int S,i,up=0,low=0,Sp=0,num=0;
    string A;

    cout << "Enter here: ";
    getline(cin,A);

    S=A.length();

    for(i=0;i<S; i++)
    {
        if(A[i]<='z' && A[i]>='a')
        {
            low+=1;
        }
        else if(A[i]>='A' && A[i]<='Z')
        {
            up+=1;
        }
        else if(A[i]>='0' && A[i]<='9')
        {
            num+=1;
        }
        else {
            Sp+=1;
        }

    }

    cout << "Upper: " << up << "\nLower: " << low << "\nNumbers: " << num << "\nSpecial: " << Sp;





    return 0;
}
