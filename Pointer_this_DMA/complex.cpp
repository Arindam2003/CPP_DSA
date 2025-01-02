#include<iostream>
using namespace std;

class Complex
{
private:
    int a,b;
public:
    void setData(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void showData()
    {
        cout<<"a="<<a<<" b="<<b<<endl;
    }
};
void f1()
{
    Complex *p;
    p=new Complex;
    p->setData(3,5);
    p->showData();
}

