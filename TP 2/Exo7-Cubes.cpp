#include<iostream>
#include<math.h>

using namespace std;
int main()
{

    int i=5,N,sum;

    cout << "Enter a number :";
    cin >>N;

    if(N>5){
            while(i>=5 && i<=N)
            { sum=sum+pow(i,3); i++;
    }
    cout << "The sum is: "<< sum;}


    else if(N<5){
        while(i<=5 && i>=N)
        { sum=sum+pow(i,3);
        i--;
    }
    cout << "The sum is: "<< sum;}


     else {
            cout << "The sum is: "<< 5*5*5;}


    return 0;
}
