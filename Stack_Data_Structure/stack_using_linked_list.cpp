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
        bool isEmpty();
        ~Stack();
        void display();

};

Stack::Stack()
{
    top=nullptr;
}

bool Stack::isEmpty()
{
    return top==nullptr;
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

//!if want to return adress...
/*
Stack& reverseStack(Stack &stk)
{
    Stack *ptr=new Stack();
    while(!stk.isEmpty())
    {
        ptr->push(stk.pop());
    }
    return *ptr;
}
*/
//! if nothing returns so this return type is void 
void reverseStack(Stack &stk)
{
    Stack s1;
    while(!stk.isEmpty())
    {
        s1.push(stk.pop());
    }
    Stack s2;
    while(!s1.isEmpty())   //! Loops run when data is not empty from the stack from where i get this...
    {
        s2.push(s1.pop());
    }
    while(!s2.isEmpty())
    {
        stk.push(s2.pop());
    }
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