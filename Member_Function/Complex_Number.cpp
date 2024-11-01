#include<iostream>

using namespace  std;

class Complex{
    private:
        int real,img;
    public:
        void setData(int,int);
        void showData();
        Complex add(Complex);
        Complex subs(Complex);
};

void Complex:: setData(int x,int y)
{
    real=x;
    img=y;
}

void Complex::showData()
{
    cout<<real<<"i "<<img<<"j "<<endl;
}

Complex Complex::add(Complex c)
{
    Complex temp;
    temp.real=real+c.real;
    temp.img=img+c.img;
    return temp;
}
Complex Complex::subs(Complex c)
{
    Complex temp;
    temp.real=real-c.real;
    temp.img=img-c.img;
    return temp;
}


int main()
{
    Complex c1,c2,c3;
    c1.setData(3,4);
    c1.showData();
    c2.setData(2,9);
    c2.showData();
    c3=c1.add(c2);
    c3.showData();
    return 0;
}