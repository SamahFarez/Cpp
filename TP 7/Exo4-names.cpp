#include<iostream>
#include<fstream>

using namespace std;

int main()
{

    string first, last , name1, name2;
    int i=1;

    ofstream out;
    out.open("names.txt");
    if(!out)
        cout << "not open ";


    while(cin >> first >> last)
    {

        out << first << "  " << last << endl;;

    }


//===========================================================

    ifstream OUT;
    OUT.open("names.txt");

    ofstream in;
    in.open("name_with_num.txt");

    if(!OUT)
        cout << "not open ";

    if(!in)
        cout << "not open ";


    while(!OUT.eof())
    {
        OUT >> name1 >> name2;
        in << i << ". "  << name1 << "  " << name2 << endl;
        i++;

    }

    return 0 ;
}
