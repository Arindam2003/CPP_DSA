#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;     
    public:
        Complex() {}
        Complex(int x) { a=x; b=0;}
        Complex(int x,int y) {  a=x; b=y; }
        Complex(Complex &C) { a=C.a; b=C.b;  }
        void setData(int,int);
        void showData();
               
};

void Complex:: setData(int x,int y) 
{
    a=x;
    b=y;
}
void Complex::showData()
{
    cout<<"a="<<a<<" b="<<b<<endl;
}
void f1()
{
    Complex c1(3),c2(2,8),c3;
    Complex c4=c2;   
     
    c4.showData();  
    c2.showData();
    
}
int main()
{
    f1();
    return 0;
}