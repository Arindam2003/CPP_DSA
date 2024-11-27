#include<iostream>
using namespace std;

class Queue{
    private:
        int capacity,front,rear;
        int *ptr;
    public:
        Queue(int);
        void insert(int);
        void viewRear();
        void display();
        void viewFront();
        int overFlow();
        int underFlow();
        void delFront();
};

Queue::Queue(int cap)
{
    capacity=cap;
    rear=-1;
    front=0;
    ptr=new int(capacity);
}

void Queue::insert(int data)
{
    if(overFlow())
    {
        cout<<"Queue OverFlow"<<endl;
    }
    else{
        ptr[++rear]=data;
    }
}

void Queue::viewRear()
{
    cout<<endl<<"Rear Element is->"<<ptr[rear];
}
void Queue::viewFront()
{
    cout<<endl<<"Front Element is->"<<ptr[front];
}
int Queue::overFlow()
{
    if(rear>=capacity-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void Queue::delFront()
{
    if(underFlow())
    {
        cout<<"Queue UnderFlow"<<endl;
    }
    else
    {
        int i;
        for(i=0;i<capacity-1;i++)
        {
            ptr[i]=ptr[i+1];
        }
        rear--;
    }
}

int Queue::underFlow()
{
    if(rear<front)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void Queue::display()
{
    cout<<endl<<"Front->";
    int i;
    for(i=front;i<=rear;i++)
    {
        cout<<ptr[i]<<"<-";
    }
}

Queue::~Queue()
{
    if(ptr!=nullptr)
    {
        delete []ptr;
    }
}

int main()
{
    Queue q(4);
    q.insert(12);
    q.insert(13);
    q.insert(14);
    q.insert(14);
    q.insert(14);
    q.insert(15);
    q.display();
    q.viewRear();
    q.viewFront();
    q.delFront();
    q.display();
    cout<<endl;
    return 0;
}