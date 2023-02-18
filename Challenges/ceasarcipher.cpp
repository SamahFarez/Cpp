#include<iostream>

using namespace std;

int main()
{
    string A;
    int N,S,i,n;

    cout << "Enter: ";
    getline(cin, A);

    cout << "Enter n: ";
    cin >> n;

    n=n%26;

    S=A.length();


    for(i=0;i<S;i++)
    {

    if(A[i]==' ')
        {
            cout << ' ';
            continue;
        }
    else{
        if(n>=0)
        {
            if(tolower(A[i])=='z')
            {
                if(n==0)
                {
                    N=int(A[i]);
                }
                else{

            N=(int(A[i])-26)+n;
            }
            }

            else
            {

            N=int(A[i])+n;
            }
        }
        else {
            if(n<=0)
            {
                if(tolower(A[i])=='a')
                {
                    if(n==0)
                {
                    N=int(A[i]);
                }
                else{

                N=(int(A[i])+26)+n;
                }
                }
            else
                {

                 N=int(A[i])+n;
                }
        }
        }
    }
    cout << char(N);
    }


    return 0;
}
