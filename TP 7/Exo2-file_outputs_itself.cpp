#include<iostream>
#include<fstream>

using namespace std;

int main()
{

    string file;
    ifstream out;
    out.open("Exo2-file_outputs_itself.cpp");
    if(!out)
    {
        cerr << "not open!";
    }

    while(!out.eof())
    {
        out >> file;
        cout << file << endl;

    }

    out.close();


    return 0 ;
}
