#include<iostream>
using namespace std;

class A
{
private:
    int a,b;
public:
    void showData();
    friend void AB(); // One function can be friend funciton of multiple class
};

class B
{
private:
    int x,y;
public:
    void showData();
    friend void AB(); // One function can be friend funciton of multiple class
};
void B::showData()
{
    cout<<"a="<<x<<endl<<"b="<<y<<endl;
}
void A::showData()
{
    cout<<"a="<<a<<endl<<"b="<<b<<endl;
}

void AB()
{
    B b;
    b.x;  //Milgeya Acess from private...
    A a;
    a.a;//Milgeya acess...
}










/*
class Rocky;
class Complex{
    private:
        int a,b;
        friend void Rocky::dost();
    public:
        void setData(int,int);
        void showData();
        
};

void Complex::setData(int x,int y)
{
    a=x;
    b=y;
}
void Complex::showData()
{
    cout<<"a="<<a<<endl<<"b="<<b<<endl;
}

class Rocky
{
private:
    int rky1,rky2;
public:
    void dost();
};

void Rocky::dost()
{
    Complex obj1;
    Rocky rky1;
    rky1.rky1=100;
    obj1.setData(12,34); //if i write friend before friend function then all private member acess by friend function object;
}
*/




