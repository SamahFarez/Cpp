#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double Q,M,F,A;
     cout <<"Enter your quiz score out of 100 : ";
     cin >> Q;
     cout <<"Enter your mid-term score out of 100: ";
     cin >> M;
     cout <<"Enter your final score out of 100: ";
     cin >> F;

     A=(Q+M+F)/3;
       if(A>=90){cout << "\nGrade A";}
       if(A>=70 && A<90){cout << "\nGrade B";}
       if(A<70 && A>=50){cout << "\nGrade C";}
       if(A<50){cout << "\nGrade F";}


    return 0;
}

