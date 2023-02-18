#include<iostream>
#include<cmath>
using namespace std;

struct time
{
    int hour;
    int minute;
    int second;
}T1,T2;


int main()
{
    int i,Th,Tm,Ts;

    cout << "Enter first time: ";
    cin >> T1.hour >> T1.minute >> T1.second;
    cout << "Enter second time: ";
    cin >> T2.hour >> T2.minute >> T2.second;


if(T1.hour>=T2.hour)
    {
        Th=T1.hour-T2.hour;
    }
    else
    {
        Th=abs(T1.hour-T2.hour)*60;
    }

    if(T1.minute>=T2.minute)
    {
        Tm=T1.minute-T2.minute;
    }
    else {
    Tm=(60-T1.minute)+T2.minute;
    }

    if(T1.second>=T2.second)
    {
        Ts=T1.second-T2.second;
    }
    else {

    Ts=(60-T1.second)+T2.second;
    }


    if(Ts>=60)
    {
        Ts=Ts%60;
    }

    if(Tm>=60)
    {
        Th=Th+1;
        Tm=Tm%60;
    }


    cout <<"Difference is: " <<  Th << " : " << Tm << " : " << Ts;




    return 0;
}
