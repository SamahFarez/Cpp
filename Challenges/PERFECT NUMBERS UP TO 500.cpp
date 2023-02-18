#include <iostream>
using namespace  std;

int main()
{
    int i,N=1,dev;

    cout << "The perfect numbers less than 500 are:";

    while(N<=500){
        dev=0;

        for(i=1;i<N;i++){

         if(N%i==0)
                    dev+=i;}

        if(dev==N){
            cout << N << "  " ;}N++;}


    return 0;
}
