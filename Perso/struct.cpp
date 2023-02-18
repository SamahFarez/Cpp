#include<iostream>
#include<sstream>

using namespace std;

struct add
{
    string street;
    string city;
    string code;
};

struct person
{
    string firstName;
    string lastName;
    string day;
    string month;
    string year;
    string street;
    string city;
    string code;


} A[10];

void display()
{
    int i,year,day,month,code;


    for(i=0; i<5; i++)
    {
        stringstream os;
        os << A[i].year ;
        os << A[i].month ;
        os << A[i].day;
        os << A[i].code;

        os >> year;
        os >> month;
        os >> day;
        os >> code;

        if((year>=2000 || month>=3 || day >5) || (code>=3000 || code <4000))
        {
            cout << "After inputting: " << endl;
            cout << "Person "<< i+1 << endl;
            cout << A[i].firstName;
            cout << A[i].lastName;
            cout << A[i].street;
            cout << A[i].city;
            cout << A[i].code;
            cout << A[i].day << "  " << A[i].month << "  " << A[i].year;

        }
    }
}
int main()
{
    int i;

    for(i=0; i< 5; i++)
    {
        cout << "Person "<< i+1 << endl;
        cout << "Enter first name: ";
        cin >> A[i].firstName;

        cout << "Enter last name: ";
        cin >> A[i].lastName ;

        cout << "Enter code: ";
        getline( cin >> ws, A[i].code) ;


        cout << "Enter street: ";
        getline( cin >> ws, A[i].street) ;


        cout << "Enter city: ";
        getline( cin >> ws, A[i].city) ;

        cout << "Enter date of birth: ";
        cin >> A[i].day >> A[i].month >> A[i].year;

    }

    display();

    return 0;
}
