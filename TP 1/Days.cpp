#include<iostream>

using namespace std;

int main(){

   int N,Y,y,W,D;


   cout << "Enter the  number:";
   cin >>N;

   Y=N/365;
   y=N%365;
   W=y/7;
   D=y%7;

   cout << "It has "<< Y << " years "<< W << " weeks " << D << " days ";






return 0;}
