#include<iostream>
using namespace std;

class Stack{
    private:
        int capacity;
        int  top;
        int *ptr;
    public:
        Stack(int);
        void push(int);
        void peek();
        void pop();
        int overflow();
        int underflow();
        ~Stack();
        void display();
        void reverse();
};

Stack::Stack(int cap)
{
    capacity=cap;
    top=-1;
    ptr=new int(capacity);
}

void Stack::push(int data)
{
    if(overflow())
    {
        cout<<"Stack Full!!"<<endl;
    }
    else
    {
        ptr[++top]=data;
    }
}

void Stack::peek()
{
    if(top>-1)
    {
        cout<<endl<<"Peek element is->"<<ptr[top]<<endl;
    }
    else
    {
        cout<<"Nothing to Peek";
    }
}

void Stack::pop()
{
    if(underflow())
    {
        cout<<"Stack UnderFlow"<<endl;
    }
    else
    {
        top--;
    }
}

Stack::~Stack()
{
    if(ptr!=nullptr)
    {
        delete []ptr;
    }
}

int Stack::overflow()
{
    if (top==capacity-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int Stack::underflow()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void Stack::display()
{
    cout<<endl;
    cout<<"Top->";
    for(int i=top;i>=0;i--)
    {
        cout<<ptr[i]<<"->";
    }
    cout<<endl;
}

void Stack::reverse()
{
    cout<<endl<<"Reverse Stack is: ";
    int i=top;
    int j=0;
    while(i>j)
    {
        int temp=ptr[i];
        ptr[i]=ptr[j];
        ptr[j]=temp;
        i--;
        j++;
    }
}



int main()
{
    Stack s(5);
    s.push(23);
    s.push(20);
    s.push(21);
    s.push(200);
    // s.pop();
    s.peek();
    s.display();
    s.reverse();
    s.display();
    return 0;
}