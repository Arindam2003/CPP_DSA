#include<iostream>
using namespace std;

struct node 
{
    node *prev;
    int item;
    node *next;
};

class DLL
{
    private:
        node *start;
    public:
        DLL();
        void insertAtStart(int);
        void insertAtLast(int);
        void display();
        node* search(int);
        void insertAtNode(node *,int);
};

DLL::DLL()   //! Constructor
{
    start=nullptr;
}
void DLL::insertAtStart(int data)   //! Insert At Begnning
{
    node *n=new node;
    n->prev=nullptr;
    n->item=data;
    n->next=start;
    start=n;
}
void DLL::insertAtLast(int data)   //! Insert At End
{
    node *n=new node;
    node *t;
    n->item=data;
    n->next=nullptr;
    if(start==nullptr)
    {
        n->prev=start;
        start=n;
    }
    else
    {
        t=start;
        while(t->next!=nullptr)
            t=t->next;
        n->prev=t;
        t->next=n;
    }
}
void DLL::display()    //! Display List
{
    node *t;
    t=start;
    while(t!=nullptr)
    {
        cout<<t->item<<" ";
        t=t->next;
    }
}
node* DLL::search(int data)   //! Search Node
{
    node *t=start;
    while (t!=nullptr)
    {
        if(t->item==data)
            return t;
        t=t->next;
    }
    return nullptr;
}
void DLL::insertAtNode(node *t,int data)   //! Insert At Node
{
    node *n=new node;
    if(t!=nullptr)
    {
        node *n=new node;
        n->prev=t;
        n->item=data;
        n->next=t->next;
    }
}









int main()
{
    DLL d;
    d.insertAtStart(23);
    d.insertAtStart(12);
    d.insertAtLast(100);
    d.display();
    cout<<endl;
    return 0;
}