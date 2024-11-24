#include<iostream>
using namespace std;

struct node
{
    node *prev;
    int item;
    node *next;
};

class CDLL
{
private:
    node *start;
public:
    CDLL();
    void insertFirst(int);
    void display();
    void insertLast(int);
    node * search(int);
    void insertNode(int,int);
};

CDLL::CDLL()
{
    start=nullptr;
}

void CDLL::insertFirst(int data)
{
    node *n=new node;
    n->item=data;
    if(start==nullptr)
    {
        start=n;
        n->prev=start;
        n->next=start;
        
    }
    else
    {
        n->prev=start->prev;
        start->prev->next=n;
        start->prev=n;
        n->next=start;
        start=n;
    }
}

void CDLL::insertLast(int data)
{
    node *n=new node;
    n->item=data;
    if(start==nullptr)
    {
        start=n;
        n->prev=start;
        n->next=start;
        
    }
    else
    {
        start->prev->next=n;
        n->prev=start->prev;
        start->prev=n;
        n->next=start;
    }
}

node* CDLL::search(int data)
{
    node *temp=start;
    while(temp->next!=start)
    {
        if(data==temp->item)
        {
            return temp;
        }
    }
    if(data==temp->item)
    {
        return temp;
    }
    else{
        return 0;
    }
}

void CDLL::insertNode(int s,int data)
{
    node *t=search(data);
    
    if(start==nullptr)
    {
        insertFirst(data);
    }
    else
    {
        node *n=new node;
        n->item=data;
        n->next=t->next;
        n->prev=t;
        t->next->prev=n;
        t->next=n;
    }
}

void CDLL::display()
{
    if(start==nullptr)
    {
        cout<<"All Node Deleted"<<endl;
    }
    else
    {
        node *t = start;
        while (t->next != start)
        {
            cout << t->item << "->";
            t = t->next;
        }
        cout << t->item;
    }
    cout<<endl;
}

int main()
{
    CDLL s;
    s.insertFirst(34);
    s.insertFirst(444);
    s.insertFirst(9904);
    s.display();
    // s.insertLast(1000);
    s.insertNode(444,500);
    s.display();


    return 0;
}
