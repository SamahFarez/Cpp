#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(void)
{
 int a = 78, t1 [6], i;
 double b = 9.87;
 char c = 'W';
 string s;
 for (i = 0; i < 6; i++)
 t1 [i] = 10000+i;
 s = "AZERTYUIO";
 ofstream f ("bin/file.txt");
 if (!f.is_open())
 cout << "Impossible d'ouvrir le fichier en écriture !" << endl;
 else
 {
 f << a << " " << b << " " << c << endl;
 for (i = 0; i < 6; i++)
 f << t1 [i] << " ";
 f << s;
 }
 f.close();
 return 0;
}
