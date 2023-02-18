#ifndef CAT_H
#define CAT_H
#include<iostream>
using namespace std;

class Cat
{
public:

    Cat();
    string gethair() const;
    string getfur() const ;
    string geteye() const;

    void seteye( );
    void setfur( );
    void sethair( );

    void printt( ) const;

    ~Cat( )
    {
        cout << " ~~";
        counter--;
    }
    static int counter ;

private:

    string eye;
    string fur;
    string hair;
};

#endif
