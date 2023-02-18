#include<iostream>
#include<string.h>

using namespace std;

struct time
{
    int hour;
    int minute;
    int second;
}t1,t2;


int main()
{
    int s,m,h;

    cout << "Enter first time: ";
    cout <<"hours: ";
    cin >> t1.hour;

    cout<< "minutes: ";
    cin >> t1.minute;

    cout<< "seconds: ";
    cin >> t1.second;

    cout << "Enter second time: ";
    cout <<"hours: ";
    cin >> t2.hour;

    cout<< "minutes: ";
    cin >> t2.minute;

    cout<< "seconds: ";
    cin >> t2.second;

    s=t1.second-t2.second;
    if(s>60)
    {
        m=s%60;
    }

    h=h+t1.hour-t2.hour;




    return 0;
}
