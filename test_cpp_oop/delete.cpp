#include <iostream>
using namespace std;
int main()
{
    int n; cout << "Give a number n : "; cin >> n;
    for (int i = 0; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            cout << "fizz" << endl;
        }
        if (i % 5 == 0)
        {
            cout << "buzz" << endl;
        }
        if (i % 7 == 0)
        {
            cout << "fizzbuzz" << endl;
        }
    }
    return 0;
}

#include <iostream>

using namespace std;

int main() {
   char str[] = "Hello C++";

   cout << "Value of str is : " << str << endl;
}
