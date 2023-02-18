#include "Students.h"

Course ::  Course (const string &course, int c)
{
    courseName=course;
    capacity=c;
    students=NULL;
    students =new string [capacity];

}

string Course ::  getCourseName() const
{
    return courseName;

}

void Course :: addStudent(const string &n)
{
    if(numberOfStudents<capacity)
    {
        students[numberOfStudents++] = n;
    }

    else cout << "Class full!";
}

void Course :: dropStudent(const string &nn)
{

    for(int i=0; i<numberOfStudents; i++)
    {
        if(nn==students[i])
        {
            for(int j=i; j<numberOfStudents-1; j++)
            {
                students[j]=students[j+1];
            }
            students[--numberOfStudents]="\0";
            return;
        }

        else continue;
    }

    cout << "Not found!";
}

string* Course ::  getStudents() const
{
    return students;

}

int Course :: getNumberOfStudents() const
{
    return numberOfStudents;

}


void Course :: displayStudents()
{

    for(int i=0; i<numberOfStudents; i++)
    {
        cout << endl << "Student " << i+1 << ": " <<*(students+i)<< endl;
    }

}

