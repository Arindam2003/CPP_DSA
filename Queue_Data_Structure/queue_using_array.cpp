#include<iostream>
#define OVERFLOW 1
#define UNDERFLOW 2
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
        bool overFlow();
        bool underFlow();
        void delFront();
        void count();
        ~Queue();
};

Queue::Queue(int cap)
{
    capacity=cap;
    rear=-1;
    front=0;
    ptr=new int[cap];
}

void Queue::insert(int data)
{
    if(overFlow())
    {
        throw OVERFLOW;
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
bool Queue::overFlow()
{
    return (capacity-1==rear&&front==0 || rear+1==front);
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

bool Queue::underFlow()
{
    if(rear<front)
        throw UNDERFLOW;
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

void Queue::count()
{
    cout<<endl<<"Number of element is : "<<rear+1<<endl;
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
    q.count();
    return 0;
}