#include <iostream>

using namespace std;

int main()
{
     int N,i=1,S=0;

     cout << "Enter a number: ";
     cin >> N;

     while(i<N){
            if(N%i==0){S=i+S;}
        i=i+1;
}
     if(S>N){cout << "This number is abundant!";}

     if(S<N) {cout << "This number is not abundant!";}


     return 0;
}
