#include <iostream>

using namespace std;

int main()
{
    // Exo 13

    int N,K;

    cout << "Enter a number N:";
    cin >> N;

    K=N%2;

    if(K==0)
        cout << "N is even ";
    if(K!=0)
        cout << "N is odd ";

    return 0;
}
