#include <iostream>
#include<math.h>

using namespace std;
int main()
{
    int N,x;
    double L;

    cout << "Enter your number dumb human: ";
    cin >> N;
    L=log(N);

    x=exp(0.5*L);

            if(x*x==N)
                cout << "It's a perfect square!!";

            else
                cout << "It;s not a perfect square!!";

    return 0;
}
