#include<iostream>
#include<cctype>

using namespace std;
int main()
{
    char NB,A,B,D,C;
    int i=1,N,M,S,a=0,b=0,c=0,d=0;

    cout << "Enter the number of student:"; cin >> N;

   while(i<=N){

    cout << "Enter the grade of the student: ";
    cin >> NB;
    NB=toupper(NB);

    switch(NB){
      case 'A':
            a=a+1; break;
      case 'B':
            b=b+1; break;
      case 'C':
            c=c+1; break;
      case 'D':
            d=d+1; break;
      default:
        cout << "Enter a grade!";}

        S=a+b;
        i=i+1;}

    M=(0.6*N);

            if(S>=M){cout << "Good class!";}
            else {cout << "More effort!";}





    return 0;
}
