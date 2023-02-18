#include <iostream>

using namespace std;

 int main()
{
    int N,x=1,y=2;

    cout << "Enter a number: ";
    cin >> N;

    cout << 1 << endl;

    while(y<N)
       { cout << 1 << string(y-2,' ') << y << endl;
        y=y+1;  }

    while(x<=N)

         { cout << x;
            x=x+1;   }

    return 0;
}
