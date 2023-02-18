 /*#include <iostream>

using std::cout;
 using std::endl;

 int main()
 {
 char *word = "test";

 // display value of char *, then display value of char *
 // static_cast to void *
 cout << "Value of word is: " << word << endl
 << "Value of static_cast< void * >( word ) is: "
 << static_cast < void * >( word ) << endl;

 return 0;

 } // end main*/

 #include <iostream>
 #include<iomanip>


 using namespace std;



 int main()
 {
 float x=5.00000000;

 cout << showpoint << x  ;
 cout.flags();

 /*int widthValue = 4;
 char sentence[ 10 ];

 cout << "Enter a sentence:" << endl;
 cin.width( 5 ); // input only 5 characters from sentence

 // set field width, then display characters based on that width
 while ( cin >> sentence ) {
 cout.width( widthValue++ );
 cout << sentence << endl;
 cin.width( 5 ); // input 5 more characters from sentence
 } // end while
*/
 return 0;
 }
