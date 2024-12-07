#include<iostream>
#define OVERFLOW 1
#define UNDERFLOW 2
using namespace std;

class Queue
{
private:
    int capacity;
    int front;
    int rear;
    int *ptr;
public:
    Queue(int);
    bool isFull(); 
    bool isEmpty();
    void insert(int);
    int getFront();
    int getRear();
    void del();
    int count();
    ~Queue();
};

Queue::Queue(int cap)
{
    capacity=cap;
    front=-1;
    rear=-1;
    ptr=new int[cap];
}

bool Queue::isFull()
{
    return (capacity-1==front&&front==0 || rear+1==front);
}
bool Queue::isEmpty()
{
    return (front==-1);
}

void Queue::insert(int num)
{
    if(isFull())
    {
        throw OVERFLOW;
    }
    if(isEmpty())
    {
        front=0;
        rear=0;
        ptr[rear]=num;
    }
    else if(rear==capacity-1)
    {
        rear=0;
        ptr[rear]=num;
    }
}

int Queue::getFront()
{
    if(front==-1)
        throw UNDERFLOW;
    return ptr[front];
}

int Queue::getRear()
{
    if(rear==-1)
        throw UNDERFLOW;
    return ptr[rear];
}

void Queue::del()
{
    if(isEmpty())
        throw UNDERFLOW;
    if(front==rear)
        front=rear=-1;
    else if(front==capacity-1)
        front=0;
    else
        front++;
}
Queue::~Queue()
{
    delete []ptr;
}

int Queue::count()
{
    int c=0;
    int i;
    if(front==-1)
            return c;
    for(i=front;i!=rear;)
    {
        if(i==capacity-1)
        {
            i=0;
        }
        else{
            i++;
        }
    }
    return c;
}




