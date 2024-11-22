#include<iostream>
using namespace std;

struct node{
    int item;
    node *next;
};

class CLL
{
    private:
        node *start;
    public:
        CLL();
        void insertFirst(int );
        void display();

};

CLL::CLL()
{
    start=nullptr;
}

void CLL::insertFirst(int data)
{
    node *n=new node;
    n->item=data;
    if(start==nullptr)
    {
        n->next=nullptr;
        start=
    }
    else if(start->next==nullptr)
    {
        start->next=n;
        n->next=start;
        start=n;
    }
    else{
        n->next=start;
        start=n;
        node *t=start;
        while(t->next!=start)
        {
            t=t->next;
        }
        t->next=start;
    }
}

void CLL:: display()
{
    node *t=start;
    while(t->next!=start)
    {
        cout<<t->item<<"->";
        t=t->next;
    }
}


int main()
{
    CLL c;
    c.insertFirst(23);
    c.insertFirst(20);
    c.insertFirst(20);
    c.insertFirst(20);
    c.display();
    cout<<endl;
    return 0;
}
