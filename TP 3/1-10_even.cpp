#include<iostream>

using namespace std;

int main ()
{

    int i=0,n=0;
    int N[10];

    for(i=0;i<10;i++)
        {
            cout << "Enter a number: ";
            cin >> N[i];

       if(N[i]%2==0)
       {
        n+=1;
       }
        }

        cout<< "Number of even numbers is: " << n;


    return 0;
}
