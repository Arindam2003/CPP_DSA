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
    void insertAfter(node *,int);
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

node *CLL::search(int data)
{
    node *temp = start;
    while(temp->next!=start)
    {
        if (data == temp->item)
            return temp;
    }
    if(temp->item==data)
        return temp;
    else
        return 0;
}

void CLL::insertAfter(node *t,int data)
{
    node *n=new node;
    n->item=data;
    if(start==nullptr)
    {
        start=n;
        n->next=start;
    }
    else
    {
        node *temp=start;
        if(t!=nullptr)
        {
            n->next=t->next;
            t->next=n;
        }
    }

}

void CLL::display()
{
    node *t = start;
    while (t->next != start)
    {
        cout << t->item << "->";
        t = t->next;
    }
    cout << t->item;
}

int main()
{
    CLL c;
    // c.insertFirst(23);
    // c.insertFirst(20);
    // c.insertFirst(21);
    // c.insertFirst(20);
    c.insertLast(100);
    c.insertLast(200);
    c.display();
    cout << endl;
    return 0;
}
