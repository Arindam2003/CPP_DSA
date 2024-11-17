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
        void deleteFirst();
        void deleteLast();
        void deleteAny(int );
        ~DLL();
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
        cout<<t->item<<"->";
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
        t->next->prev=n;
        t->next=n;

    }
}
void DLL::deleteFirst()
{
    node *t;
    if(start)
    {
        t=start;
        start=start->next;
        start->prev=nullptr;
        delete t;
    }
}
void DLL::deleteLast()
{
    node *t;
    t=start;
    if(start)
    {
        if(start->next==nullptr)
        {
            delete start;
            start=nullptr;
        }
        while(t->next->next!=nullptr)
        {
            t=t->next;
        }
        delete t->next;
        t->next=nullptr;
    }

}
void DLL::deleteAny(int data)
{
    node *t2;
    t2=search(data);
    
    if(t2)
    {
        if(t2->next!=nullptr)   // ! Not last node
        {
            t2->next->prev=t2->prev;
        }
        if(t2->prev!=nullptr)    //! Not first node
        {
            t2->prev->next=t2->next;
        }
        else
        {
            start=t2->next;
        }
        delete t2;
    }
}
DLL::~DLL()
{
    while (start)
    {
        deleteFirst();
    }
    
}



int main()
{
    DLL d;
    d.insertAtStart(23);
    d.insertAtStart(12);
    d.insertAtLast(100);
    d.insertAtLast(500);
    d.insertAtLast(20);
    d.insertAtLast(40);
    d.insertAtLast(60);
    d.insertAtLast(1110);
    d.display();
    cout<<endl;
    d.deleteLast();
    d.display();
    cout<<endl;
    d.deleteAny(500);
    d.display();
    return 0;
}



//!!!!Deletation is not perfect...



//!  Important Notes...
//? When insert a node hen first node full create and then check base case like here is any node or not then go for that part first