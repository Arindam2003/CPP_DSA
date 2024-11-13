#include<iostream>
using namespace std;
#define OVERFLOW 1
#define INVALID_INDEX 2
class Array
{
    private:
        int capacity;
        int last_index;
        int *ptr;
    public:
        Array(int );
        bool isEmpty();
        void append(int);
        bool isFull();
        void insert(int,int);
        void edit(int ,int);
        void del(int);
        int getElem(int index);
        int count();
        ~Array();
        int find_elem(int);

        Array (Array &); //!copy constructor
        Array& operator=(Array &);

};


Array::Array(int cap)
{
    capacity=cap;
    last_index=-1;
    ptr=new int(capacity);
}
bool Array::isEmpty()
{
    // if(last_index==-1)
    // {
    //     return true;
    // }
    // else {
    //     return false;
    // }

    return last_index==-1;
}
void Array::append(int data)
{
    if(isFull())
    {
        throw OVERFLOW;
    }
    ptr[last_index+1]=data;
    last_index++;
}
bool Array::isFull()
{
    return last_index==capacity-1;
}
void Array::insert(int data,int index)
{
    if(index<0||index>last_index+1)
    {
        throw INVALID_INDEX;
    }
    if(isFull())
    {
        throw OVERFLOW;
    }
    for(int i=last_index;i>=index;i--)
    {
        ptr[i+1]=ptr[i];
    }
    ptr[index]=data;
    last_index++;
}
void Array::edit(int data,int index)
{
    if(index<0||index>last_index)
        throw INVALID_INDEX;
    ptr[index]=data;
}
void Array::del(int index)
{
    if(index<0||index>last_index)
        throw INVALID_INDEX;
    for(int i=index;i<last_index;i++)
    {
        ptr[i]=ptr[i+1];
    }
    last_index--;
}
int Array::getElem(int index)
{
    if(index<0||index>last_index)
        throw INVALID_INDEX;
    return ptr[index];
}
int Array::count()
{
    return last_index+1;
}
Array::~Array()
{
    delete []ptr;
}
int Array::find_elem(int x)
{
    for(int i=0;i<last_index;i++)
    {
        if(ptr[i]==x)
            return i;
    }
    return -1;
}
Array::Array(Array &arr)
{
    capacity=arr.capacity;
    last_index=arr.last_index;
    ptr=new int[capacity];
    for(int i=0;i<=last_index;i++)
    {
        ptr[i]=arr.ptr[i];
    }
}
Array& Array::operator=(Array &arr)
{
    if(ptr!=nullptr)
    {
        delete []ptr;
    }
    capacity=arr.capacity;
    last_index=arr.last_index;
    ptr=new int[capacity];
    for(int i=0;i<=last_index;i++)
    {
        ptr[i]=arr.ptr[i];
    }
    return *this;
}

int main()
{
    Array arr(4);
}