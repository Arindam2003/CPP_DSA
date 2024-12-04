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
    void del();
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
    else
    {
        
    }
}

void Queue::del()
{
    if(isEmpty())
    {
        throw UNDERFLOW;
    }
}





