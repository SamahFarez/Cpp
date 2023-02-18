#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main (void)
{
 int a, t1 [6], i;
 double b;
 char c;
 string s;
 ifstream f ("toto.txt");
 if (!f.is_open())
 cout << "Impossible d'ouvrir le fichier en lecture !" << endl;
 else
 {
 f >> a >> b >> c;
 for (i = 0; i < 6; i++)
 f >> t1 [i];
 f >> s;
 }
 f.close();
 cout << "a=" << a << endl
 << "b=" << b <<endl
 << "c=" << c <<endl;
 for (i = 0; i < 6; i++)
 cout << t1 [i] << endl;
 cout << s << endl;
 return 0;
}
