#ifndef BLUEMARINE_H_INCLUDED
#define BLUEMARINE_H_INCLUDED

#include"Mammals.h"
#include"MarineAnimals.h"


class BlueMarine : public MarineAnimals , public Mammals
{
public:
    BlueMarine()
    {
        type="BlueMarine";
    }
    void print()
    {

        cout << "I belong to both the categories: Mammals and Marine Animals !" << endl;
    }

private:
    string type;

};

#endif // BLUEMARINE_H_INCLUDED
