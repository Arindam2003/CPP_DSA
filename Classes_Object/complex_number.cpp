#include<iostream>
using namespace std;

class Complex
{
    private:
        int real,img;
    public:
        void setvalue(int,int);
        void display();
        Complex add(Complex);
        Complex subs(Complex);
        Complex multi(Complex);
};
void Complex::setvalue(int x,int y)
        {
            real=x;
            img=y;
        }
void Complex::display()
        {
            cout<<real<<" "<<img<<"i"<<endl;
        }
Complex Complex:: add(Complex c)
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
Complex Complex::multi(Complex c)
{
    Complex temp;
    temp.real=real*c.real;
    temp.img=img*c.img;
    return temp;
}

int main()
{
    Complex c1,c2,c3;
    c1.setvalue(2,3);
    c1.display();
    c2.setvalue(4,5);
    c2.display();
    c3=c1.add(c2);
    c3.display();
    return 0;
}