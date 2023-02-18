#include<iostream>
#include<string.h>
#include<sstream>


using namespace std;
int main()
{
    int D=0,i=0,M,N,R,n;

    cout << "Enter a number: ";
    cin >> N;
    n=N;;

    while(N>0){
        R=(N/10);
        D=D+1;
        N=R;
    }

    int T[D-1]={};

    cout << "The reverse is: ";


     while(i<=(D-1)) {
            M=(n/10);
            T[i]={(n-(M*10))};
            n=M;
            cout << T[i];
            i++;}


    return 0;
}
