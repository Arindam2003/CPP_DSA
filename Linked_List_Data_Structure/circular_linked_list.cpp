#include <iostream>
using namespace std;

struct node
{
    int item;
    node *next;
};

class CLL
{
private:
    node *start;

public:
    CLL();
    void insertFirst(int);
    void display();
    void insertLast(int);
    node *search(int);
    void insertAfter(int,int);
    void delFirst();
    void delLast();
    void delNode(int);
    ~CLL();
};

CLL::CLL()
{
    start = nullptr;
}

void CLL::insertFirst(int data)
{
    node *n = new node;
    n->item = data;
    if (start == nullptr)
    {
        start = n;
        n->next = start;
    }
    else
    {
        node *t = start;
        while (t->next != start)
        {
            t = t->next;
        }
        n->next = start;
        t->next = n;
        start = n;
    }
}

void CLL::insertLast(int data)
{
    node *n = new node;
    n->item = data;
    if (start == nullptr)
    {
        start = n;
        n->next = start;
    }
    else
    {
        node *temp = start;
        while (temp->next != start)
        {
            temp = temp->next;
        }
        n->next = temp->next;
        temp->next = n;
    }
}

node* CLL::search(int data)
{
    node *temp = start;
    while(temp->next!=start)
    {
        if (temp->item==data)
            return temp;
        temp=temp->next;
    }
    if(temp->item==data)
    {
        return temp;
    }
    else{
        return 0;
    }
}

void CLL::insertAfter(int s,int data)
{
    node *t=search(s);
    node *n=new node;
    n->item=data;
    if(start==nullptr)
    {
        start=n;
        n->next=start;
    }
    else
    {
        if(t!=nullptr)
        {
            n->next=t->next;
            t->next=n;
        }
    }

}

void CLL::display()
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
}

void CLL::delFirst()
{
    if(start==start->next)
    {
        node *temp=start;
        start=nullptr;
        delete temp;
    }
    else
    {
        node *first=start;
        node *last=start;
        while(last->next!=start)
        {
            last=last->next;
        }
        last->next=first->next;
        start=first->next;
        delete first;
    }
}

void CLL::delLast()
{
    if(start==start->next)
    {
        node *temp=start;
        start=nullptr;
        delete temp;
    }
    else
    {
        node *temp=start;
        while(temp->next->next!=start)
        {
            temp=temp->next;
        }
        node *t=temp->next;
        temp->next=start;
        delete t;
    }
}

CLL::~CLL()
{
    while(start)
    {
        delFirst();
    }
}

void CLL::delNode(int item)
{
    node *t=search(item);
    if(start==t)
    {
        delFirst();
    }
    else if(t->next==start)
    {
        delLast();
    }
    else
    {
        node *temp=start;
        while(temp->next!=t)
        {
            temp=temp->next;
        }
        temp->next=t->next;
        delete t;
    }
}

int main()
{
    CLL c;
    c.insertFirst(23);
    c.insertFirst(20);
    c.insertFirst(21);
    c.insertFirst(20);
    c.insertLast(100);
    // c.insertLast(200);
    // c.delFirst();
    // c.delFirst();
    // c.delLast();
    c.display();
    // c.delNode(21);
    c.insertAfter(20,500);
    c.insertAfter(21,1500);
    cout<<endl;
    c.display();
    cout << endl;
    return 0;
}
