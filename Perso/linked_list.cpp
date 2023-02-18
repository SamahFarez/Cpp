#include <iostream>

using namespace std;

struct node
{
    int data;
    node* next;
};

node* start = NULL;

//====================================================

node* createnode()
{
    node* temp;
    temp = new node;
    return temp;
}

//====================================================

void insertnode()
{
    int n;
    for(int i=0; i<4; i++)
    {

        node * temp, *trans;
        cin >> n;

        temp = createnode();
        temp->data=n;
        temp->next=NULL;

        if(start==NULL)
            start=temp;

        else
        {
            trans=start;
            while(trans->next !=NULL)
            {
                trans=trans->next;
            }
            trans->next=temp;
        }
    }
}
//======================================================

void display();

//======================================================

void addstart(int n)
{
    node* temp;

    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        temp=createnode();
        temp->data=n;

        temp->next=start;
        start = temp;
    }
}


//=========================================================


void addend(int n)
{
    node* endnode=createnode();
    endnode->data=n;
    endnode->next=NULL;


    node* last= start;

    if(start==NULL)
        start=endnode;

    else
    {

        while(last->next!=NULL)
        {
            last=last->next;
        }

        last->next = endnode ;
        endnode->data=n;

    }
}

//=========================================================


void nodefirst_delete(int p)
{
    node* temp, *trans, *aft;


    trans->data=p;
    trans->next=NULL;

    if(start==NULL)
    {
        cout << "MT";
    }
    else
    {

        temp=start;
        start = temp->next;

        delete(temp);

    }
}

void deletee(int v)
{
    node *curr=start, *pre=start;

    if(curr->data==v)
    {
        start=curr->next;
        free(curr);
        return;

    }

    while(curr->data!=v)
    {
        pre=curr;
        curr=curr->next;
    }

    pre->next=curr->next;
    free(curr);

}


//======================================================
void addmid(int p, int n)
{
    node* nw=createnode(), * temp;

    nw->data=n;
    nw->next=NULL;
    temp=start;

    p--;
    while(p!=1)
    {
        temp=temp->next;
        p--;
    }

    nw->next=temp->next;
    temp->next=nw;

}

void deletelast()
{
    node* temp = start,* tempp=start;

    if(start->next==NULL || start==NULL)
    {
        cout<< " nah";
    }
    else
    {
        while(temp->next!=NULL)
        {
            tempp=temp;
            temp=temp->next;
        }

        tempp->next=NULL;
        free(temp);
        temp=NULL;

    }
}
//======================================================

int main()
{

    int n,N,p;
    insertnode();

    cout << "\n===================================\n" ;

    cin >> n;

    cout << "\n===================================\n" ;

    addstart(n);
    display();

    cout << "\n===================================\n" ;


    cin >> N;
    cout << "\n===================================\n" ;
    addend(N);
    display();

    cout << "\n===================================\n" ;

    cin >> p >> n;

    cout << "\n===================================\n" ;

    addmid(p,n);
    display();

    cout << "\n===================================\n" ;



    cin >> p;

    cout << "\n===================================\n" ;

    deletee(p);
    display();A


    cout << "\n===================================\n" ;

    deletelast();
    display();

    return 0;
}
//=========================================================

void display()
{
    node* current ;

    if(start==NULL)
    {
        cout << "none";
    }
    else
    {
        current = start;

        while(current !=NULL)
        {
            cout  << current->data << endl;
            current=current->next;
        }
    }
}
