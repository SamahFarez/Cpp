#include "../PrepackedFood.h"
#include "../FreshFood.h"


int main()
{
    Products p1, p2(153785, " first one");
    FreshFood fresh1, fresh2( 3743968, " second one", 2, 65);
    PrepackedFood packed1, packed2( 7836589, " third one", 95);

    system("cls");

    p1.printer();
    p2.printer();

    fresh1.printer();
    fresh2.printer();

    packed1.printer();
    packed2.printer();
}
