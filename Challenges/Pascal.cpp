#include <iostream>

using namespace std;

int main()
{
    int N=1,i=1,x,a;
    cout << "Enter a number: ";
    cin >> a;

 while(N<10)

    {
    while(i<=a)
    {x=1;
      while(x<N)
       {cout << x  ;
       x++;

       }
    i=i+1;
        cout << "1"<< endl;


   N=N+1;

    }
}


    return 0;
}
