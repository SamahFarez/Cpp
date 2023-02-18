#include<iostream>
using namespace std;
int main()
{
    int i,S,j;
    string A,a;

    cout << "Enter here: ";
    getline(cin,A);

    S=A.length();

    A[0]=toupper(A[0]);

    for(i=1;i<S; i++)
    {
        if(A[i]==' ')
        {
            i++;
            A[i]=toupper(A[i]);
            i++;
        }
    }
    cout<< "Your words: " <<  A;

    return 0;
}
