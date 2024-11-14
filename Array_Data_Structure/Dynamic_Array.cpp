#include<iostream>
using namespace std;

class DynArray
{
    private:
        int capacity;
        int last_index;
        int *ptr;
    protected:
        void doubleArray();
        void halfArray();
    public:
        DynArray(int );
        int current_cap();
        bool isEmpty();
        void append(int );
        void insert(int ,int);
        bool isFull();
        void edit(int,int);
        void del(int );
        int get(int );
        int count();
};

DynArray::DynArray(int cap)
{
    capacity=cap;
    last_index=-1;
    ptr=new int[capacity];
}
int DynArray::current_cap()
{
    return capacity;
}
bool DynArray::isEmpty()
{
    return last_index==-1;
}
void DynArray::append(int data)
{
    if (isFull())
    {
        doubleArray();
    }
    ptr[last_index+1]=data;
    last_index++;
}
void DynArray::insert(int data,int index)
{
    if(index<0||index>last_index+1)
    {
        cout<<"Invalid Index";
    }
    else
    {
        if(isFull())
            doubleArray();
        for(int i=last_index;i>=index;i--)
        {
            ptr[i+1]=ptr[i];
        }
        ptr[index]=data;
        last_index++;
    }
}
bool DynArray::isFull()
{
    return last_index==capacity-1;
}
void DynArray::edit(int data,int index)
{
    if(index<0||index>last_index)
    {
        cout<<"Invalid Index"<<endl;
    }
    else
    {
        ptr[index]=data;
    }
}
void DynArray::del(int index)
{
    if(index<0||index>last_index)
    {
        cout<<"Invalid Index";
    }
    else
    {
        for(int i=index;i<=last_index;i++)
        {
            ptr[i]=ptr[i+1];
        }
        last_index--;
        if(count()<capacity/2 &&capacity>1)
        {
            halfArray();
        }
    }

}
int DynArray::get(int index)
{
    if(index<0||index>last_index)
    {
        return 0;
    }
    else
    {
        return index;
    }
}
int DynArray::count()
{
    return last_index+1;
}
void DynArray::doubleArray()
{
    int *temp;
    temp=new int[capacity*2];
    for (int i=0;i<=last_index;i++)
    {
        temp[i]=ptr[i];
    }
    delete []ptr;
    ptr=temp;
    capacity=capacity*2;
}
void DynArray::halfArray()
{
    int *temp;
    temp=new int[capacity/2];
    for (int i=0;i<=last_index;i++)
    {
        temp[i]=ptr[i];
    }
    delete []ptr;
    ptr=temp;
    capacity=capacity/2;
}