#include"Store.h"

// Farez Samah Ikram
// S1G4
int main ()
{

    Product pen("Pen", 10, 126),ruler("Ruler", 25, 36), notebook("NoteBook", 45,64);
    Store St;

    St.addproduct( pen);
    St.addproduct( ruler);
    St.addproduct( notebook);

    St.print();

}
