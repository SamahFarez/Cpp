#include <iostream>

using namespace std;

int main()
{ //Exo 12
    int A,B,C;

    cout << "Enter a number A:";
    cin >> A;
    cout << "Enter a number B:";
    cin >> B;
    cout << "Enter a number C:";
    cin >> C;

    if (A<B)

        if(B>C)
            cout << "The largest number is " << B << endl;
        if(B<C)
            if(A>C)
            cout << "The largest number is " << A << endl;
            else
            cout << "The largest number is " << C << endl;

    if (A>B)
        if(A<C)
        cout << "The largest number is " << C << endl;
        else
        cout << "The largest number is " << A << endl;


    if(A==B)

         if(C<A)
                cout << "The largest number is " << A << endl;
         else
                cout << "The largest number is " << C << endl;
                return O;
}
{// Exo 13




    int N,k;

    cout << "Enter a number N:";
    cin >> N;

    if (A==2*k+1)
        cout << "N is odd ";
    else
        cout << "N is even ";

    return 0;
}
