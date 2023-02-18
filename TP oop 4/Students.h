#ifndef STUDENTS_H
#define STUDENTS_H

#include <iostream>

using namespace std;

class Course
{
public:
    Course (const string &course, int c);

    string getCourseName() const;
    void addStudent(const string &n);
    void dropStudent(const string &nn);
    string* getStudents() const;
    int getNumberOfStudents() const;
    void makearray();
    void displayStudents();

    ~Course()
    {
        cout << "\ndest";
    }

private:
    string courseName;
    string *students;
    int numberOfStudents=0;
    int capacity;
};


#endif // STUDENTS_H
