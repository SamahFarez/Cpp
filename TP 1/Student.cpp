#include <iostream>

using namespace std;

int main()
{
    float A,B,C,D,E,Average,Percentage,Score;

    string Name, First, Second, Third, Fourth ,Fifth;


    cout << "Enter your name: " << endl;
    cin >> Name;
    cout << "Enter the name of the first subject: ";
    cin >> First;

    cout << "Enter the name of the second subject: ";
    cin >> Second;

    cout << "Enter the name of the third subject: ";
    cin >> Third;

    cout << "Enter the name of the fourth subject: ";
    cin >> Fourth;

    cout << "Enter the name of the fifth subject: ";
    cin >> Fifth;

    cout << endl<< "Enter your mark of: "<< endl;

    cout << First << ": ";
    cin >> A;
    cout << Second << ": ";
    cin >> B;
    cout << Third << ": ";
    cin >> C;
    cout << Fourth << ": ";
    cin >> D;
    cout << Fifth << ": ";
    cin >> E;
    Score=A+B+C+D+E;
    Average=(A+B+C+D+E)/5;
    Percentage=(A+B+C+D+E)/100;

    cout <<endl<< "Name:" << Name << endl << "Score: " << Score << endl << "Average: " << Average << endl << "Percentage: " << Percentage << endl;

}
