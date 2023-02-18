#include <iostream>
#include<fstream>
using namespace std;
int main (void)
{
 int a, t1 [6], i;
 double b;
 char c;
 string s;
 ifstream f ("toto.xyz", ios::in | ios::binary);
 if (!f.is_open())
 cout << "Impossible d'ouvrir le fichier en lecture !" << endl;
 else
    {
 f.read ((char *)&a, sizeof(int));
 f.read ((char *)&b, sizeof(double));
 f.read ((char *)&c, sizeof(char));
 for (i = 0; i < 6; i++)
 f.read ((char *)&t1[i], sizeof(int));
 }
 f.close();

 cout << "a=" << a << endl
 << "b=" << b << endl
 << "c=" << c << endl;
 for (i = 0; i < 6; i++)
 cout << t1 [i] << endl;
 return 0;
}
