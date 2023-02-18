#include "Mammals.h"
#include "Marine.h"

int main()
{
    BlueMarine *blue;
    Mammals mammal;
    MarineAnimals marine;


    blue = &mammal ;

    blue->print();

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    blue = &marine ;

    blue->print();
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    return 0;
}
