#include <iostream>
#include <fstream>
using namespace std;
int main (void)
{
 int a = 78, t1 [6], i;
 double b = 9.87;
 char c = 'W';
 for (i = 0; i < 6; i++)
 t1 [i] = 10000+i;
 ofstream f ("toto.xyz", ios::out | ios::binary);
 if(!f.is_open())
 cout << "Impossible d'ouvrir le fichier en écriture !" << endl;
 else
 {
 f.write ((char *)&a, sizeof(int));
 f.write ((char *)&b, sizeof(double));
 f.write ((char *)&c, sizeof(char));
 for (i = 0; i < 6; i++)
 f.write ((char *)&t1[i], sizeof(int));
 }
 f.close();
 return 0;
}
