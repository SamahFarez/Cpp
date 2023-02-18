#include"Students.cpp"
#include"Students.h"
int main()
{
    string a,b, s1, s2,s;
    int C1, C2;

    cout << "Enter course 1 name: \n";
    cin >> a;
    cout << "Enter capacity: \n";
    cin >> C1;

    cout <<  "\n~~~~~~~~~~~~~~~~~~~~~~~~\n";


    cout << "Enter course 2 name: \n";
    cin >> b;
    cout << "Enter capacity: \n";
    cin >> C2;

    Course c1(a, C1), c2 (b, C2);

    cout << "Enter names of students for course 1 ( stop to stop the input!): \n";

    for(int i=0; i<C1; i++)
    {

        cout << "Student " << i+1 << " : ";
        cin >> s1;
        if(s1=="stop")
            break;

        else
            c1.addStudent(s1);

    }

    cout <<  "\n~~~~~~~~~~~~~~~~~~~~~~~~\n";


    cout << "Enter names of students for course 2( 'stop' to stop the input!): \n";

    for(int i=0; i<C2; i++)
    {

        cout << "Student " << i+1 << " : ";
        cin >> s2;

        if(s2=="stop")
            break;

        else
            c2.addStudent(s2);

    }

    cout <<  "\n~~~~~~~~~~~~~~~~~~~~~~~~\n";

    cout <<  "\n~~~~~~~~~~~~~~~~~~~~~~~~\n";



    cout << "\nCourse 1: " << c1.getCourseName() << "\n\nStudents: \n" ;
    c1.getStudents();
    c1.displayStudents();

    cout <<  "\n~~~~~~~~~~~~~~~~~~~~~~~~\n";


    cout << "\nCourse 2: " << c2.getCourseName() << "\n\nStudents: \n";
    c2.getStudents();
    c2.displayStudents();

    cout <<  "\n~~~~~~~~~~~~~~~~~~~~~~~~\n";

    cout << "\nNow u should drop a student from course 2, choose one\n";
    cin >> s;

    c2.dropStudent(s);

    cout << "\n\nCourse 2: " << c2.getCourseName() << "\n\nStudents: \n";
    c2.getStudents();
    c2.displayStudents();






    return 0;
}
