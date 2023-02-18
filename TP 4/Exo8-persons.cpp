#include<iostream>

using namespace std;

struct person
{
    string firstName;
    string lastName;
    string address;
    string day;
    string month;
    string year;

}A[10];

int main()
{
    int i;

    for(i=0;i<10;i++)
    {
        cout << "Person "<< i+1 << endl;
        cout << "Enter first name: ";
        cin >> A[i].firstName;

        cout << "Enter last name: ";
        cin >> A[i].lastName ;

        cout << "Enter address: ";
        getline( cin >> ws , A[i].address) ;

        cout << "Enter date of birth: ";
        cin >> A[i].day >> A[i].month >> A[i].year;

    }


    return 0;
}
