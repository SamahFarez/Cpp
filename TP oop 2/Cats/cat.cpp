#include "cat.h"
#include<time.h>

//============================= arrays
/*
string Fur[3]= {"black","grey","brown"};
string Eye[3]= {"green","blue","brown" };
string Hair[2]= {"short", "long" };
*/


//=============================  constructor


int Cat :: counter = 1;

Cat:: Cat()
{
    setfur();
    seteye();
    sethair();
    printt();

};

//====================== set functions


void Cat:: setfur()
{
    srand(time (0));
    int x = rand() % 3;
    if(x==0)
        fur="grey";
    else
    {
        if (x==1)
            fur="brown";
        else if(x==2)
            fur="black";

    }
}

void Cat:: seteye( )
{
    srand(time (0));
    int x = rand() % 3;

    if(x==0)
        eye="green";
    else
    {
        if (x==1)
            eye="blue";

        else if(x==2)
            eye="brown";
    }
}

void Cat:: sethair( )
{
    srand(time (0));
    int x = rand() % 2;
    if(x==0)
        hair="short";
    else if (x==1)
        hair="long";
}

//====================== print

void  Cat :: printt() const
{
    cout << "Cat " << counter<< endl;
    counter++;

    cout << "Hair: " << hair << endl
         << "Eye: " << eye << endl
         << "Fur: " << fur << endl;
}

//====================== get functions

string Cat:: gethair() const
{
    return hair;
}

string Cat:: getfur()const
{
    return fur;
}

string Cat:: geteye() const
{
    return eye;
}







