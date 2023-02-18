#include"Audi.h"
#include"Ford.h"
#include"SportBike.h"
#include "Scooter.h"

int main()
{
    Vehicle v(0,7);

    Audi  audi;
    Ford ford;
    SportBike sport;
    Scooter scooter;

    system("cls");

    audi.print();

    ford.print();

    sport.print();

    scooter.print();
}
