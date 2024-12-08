#include <iostream>
using namespace std;

struct node
{
    int item;
    node *next;
};

class Queue
{
private:
    node *front, *rear;

public:
    Queue();
    void insert(int);
    void display();
    int viewRear();
    int viewFront();
    void delFront();
};

Queue::Queue()
{
    front = nullptr;
    rear = nullptr;
}
void Queue::insert(int data)
{
    node *newnode = new node;
    newnode->item = data;
    newnode->next = nullptr;
    if (front == nullptr)
    {
        front = newnode;
        rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = rear->next;
    }
}
int Queue::viewRear()
{
    if(rear==nullptr)
        return -1;
    else
    {
        return rear->item;
    }
}
int Queue::viewFront()
{
    if(front==nullptr)
        return -1;
    else
    {
        return front->item;
    }
}

void Queue::delFront()
{
    if(front==nullptr)
    {
        cout<<"UnderFlow";
    }
    else
    {
        node *temp=front;
        front=front->next;
        delete []temp;
    }
}





void Queue::display()
{
    node *temp = front;
    // while (temp != nullptr)
    // {
    //     cout << temp->item << " -> ";
    //     temp = temp->next;
    // }

    do
    {
        cout << temp->item << " -> ";
        temp = temp->next;
    } while (temp!=nullptr);
    
}

int main()
{
    Queue q;
    q.insert(23);
    q.insert(35);
    q.insert(34);
    q.insert(33);
    q.insert(13);
    q.display();
    cout << endl;
    cout<<"Rear element is - >"<<q.viewRear()<<endl;
    cout<<"Front element is - >"<<q.viewFront()<<endl;
    q.delFront();
    q.display();
    return 0;
}
