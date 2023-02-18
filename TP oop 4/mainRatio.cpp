#include "RatioNum.cpp"
#include<iomanip>
int main()
{
    RationalNumber a(3,2),b(1,6);



    cout << "Addition: "  << a+b << endl
         << "Substraction: "  << a-b << endl
         << "Multiplication: "  << a*b << endl
         << "Division: "  << a/b << endl;
    -a;

    cout << "-a = " << a << endl
        << "Float a = " << float(a) << endl
        << "string a = " << string(a) << endl
        << "Equal ? " << endl;

        string s=string(a);
        s+="a";
        cout << "string s = " << s << endl;

        if(a==b)
            cout << "equal";
        else if (a!=b)
            cout << "Not!";












}
