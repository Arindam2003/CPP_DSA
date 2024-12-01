#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

class Stack{
    private:
        node *top;
    public:
        Stack();
        void push(int);
        void peek();
        int pop();
        ~Stack();
        void display();

};

Stack::Stack()
{
    top=nullptr;
}

void Stack::push(int item)
{
    node *n=new node;
    n->data=item;
    n->next=top;
    top=n;
}

void Stack::peek()
{
    if(top==nullptr)
    {
        cout<<"Empty Stack"<<endl;
    }
    else
    {
        cout<<"Peek Element is-->"<<top->data<<endl;
    }
}

int Stack::pop()
{
    if(top==nullptr)
    {
        return -1;
    }
    else
    {
        int d=top->data;
        node *temp=top;
        top=top->next;
        delete temp;
        return d;
    }
}

Stack::~Stack()
{
    while (top)
    {
        pop();
    }
    
}

void Stack::display()
{
    node *temp=top;
    while(temp!=nullptr)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}


int main()
{
    Stack s;
    s.push(24);
    s.push(23);
    s.push(22);
    s.push(21);
    s.push(20);
    s.display();
    s.pop();
    s.display();
    s.peek();
    cout<<endl;
    return 0;
}