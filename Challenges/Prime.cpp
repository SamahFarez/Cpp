
#include<iostream>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
    int N,i=1,X=0,PGCD,S;
    double Result,s;

    cout << "Enter that stupid number: ";
    cin >> N;

    s=sqrt(N);
    S=int(s);

    if(N>=0){
        while(i<=S){PGCD=__gcd(N,i);
                                                    cout << PGCD << endl;
                X=X+PGCD;
                i=i+1;}
         Result=(X/i);
                                                    cout << Result << endl ;

    if(Result==1.0){
        cout << "Number is prime!";}

    else
        cout << "Number is not prime: ";}

    return 0;
}
