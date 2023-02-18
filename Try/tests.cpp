#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int A,B,N,S,C,sum,i;

    cout << "Enter A: ";
    cin >> A;

    cout << "Enter B: ";
    cin >> B;

    C=abs(A-B);

    cout << "\nAbsolute difference: " << C << endl;

    S=A+B;

    if(C!=0)
    {
        cout << "\nThe sum is: " <<S;
    }
    else
        { cout << "\nTheir triple sum is: " << S*3;

    }

    //==================

    cout << endl;;

    cout << "\nEnter number: ";
    cin >> N;

    for(i=1;i<=N;i++)
    {
        sum+=i;
    }

    cout << "The sum is: " << sum;

    return 0;
}
