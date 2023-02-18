#include<iostream>

using namespace std;

int multiply(int a, int b)
{
  int c;
    c = a * b;

  return c;
}

int main()
  {
     int a,b,c;

  cout << "Enter two numbers: ";
  cin >> a >> b;

  c=multiply(a,b);

  cout << "Result is: " << c;

  return 0;


}
