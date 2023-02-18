#include<iostream>

using namespace std;

char N[9]={'1','2','3', '4', '5', '6', '7','8','9'};

void arrays();

void winner(int a);

int main()
{
    int j,i,s,a=9,b=0,w,x,X;

    for(i=0;i<9;i++)
    {

//===========================Player number

        x=i;
        X=(x+1)%2;

        if(X==0)
        {
            X=2;
        }

        cout << endl << "***Player~" << X << "***\n";

//============================== print slots

        for(j=0;j<9;j++)
            {
                 cout << " | " << N[j] ;
            if(j%3==2)
            {
                cout << " | "<< endl ;
            }
            }

//================================ filling X O

        cout << "\nChoose a slot: ";
        cin >> s;

            if( s<1 || s>9 || N[s-1]=='O' || N[s-1]=='X')
        {
            cout << "\nChoose a valid spot !!\n";
            i--;
        }

        else if(s>=1 && s<=9)
            {
                if(i%2==0)
                {
                    N[s-1]='X';
                 }
                else
                {
                    N[s-1]='O';
                }
            }

//====================================== horizontal

    for(j=0;j<9;j=j+3)

    {   if(N[j]==N[j+1] && N[j+1]==N[j+2])
                {
                    if(N[j]=='X')
                    {
                        winner(1);
                        }
                    else if (N[j]=='O')
                    {
                        winner(2);
                    }
                }
            }
//======================================== vertical

    for(j=0;j<9;j++)

    {   if(N[j]==N[j+3] && N[j+3]==N[j+6])
                {
                    if(N[j]=='X')
                    {
                       winner(1);
                        }
                    else if (N[j]=='O')
                    {
                       winner(2);
                    }
                }
            }

//=========================================== diagonal 1

    if(N[0]== N[4] && N[4]== N[8])

    {
           if(N[0]=='X')
                    {
                        winner(1);
                        }
                    else if (N[0]=='O')
                    {
                        winner(2);
    }
    }

//============================================diagonal 2

    if(N[2]== N[4] && N[4]== N[6])
    {
           if(N[2]=='X')
                    {
                        winner(1);
                        }
            else if (N[2]=='O')
                    {
                        winner(2);
    }
    }
    }

//==============================last print for draw

        for(j=0;j<9;j++)
            {
                 cout << " | " << N[j] ;
            if(j%3==2)
            {
                cout << " | "<< endl ;
            }
            }

//======================================== draw

    cout << endl <<  "Draw!" << endl;
    exit (0);

    return 0;
}

void arrays()
 {
        for(int j=0;j<9;j++)
            {
                 cout << " | " << N[j] ;
            if(j%3==2)
            {
                cout << " | "<< endl ;
            }
            }
 }

void winner(int a)
{
    arrays();
    cout << endl << "Congrats to our winner!! Player " << a;
    exit(0);
}
