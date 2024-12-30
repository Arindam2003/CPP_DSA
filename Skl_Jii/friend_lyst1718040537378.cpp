#include<iostream>
using namespace std;

class Complex
{
    private:
        int a,b;     
    public:        
        void setData(int,int);
        void showData();   
        friend Complex operator+(Complex,Complex);   
        friend Complex operator-(Complex);   
};
Complex operator+(Complex X,Complex Y)
{
    Complex temp;
    temp.a=X.a+Y.a;
    temp.b=X.b+Y.b;
    return temp;
}
Complex operator-(Complex X)
{
    Complex temp;
    temp.a=-X.a;
    temp.b=-X.b;
    return temp;
}
void Complex:: setData(int x,int y) 
{
    a=x;
    b=y;
}
void Complex::showData()
{
    cout<<"a="<<a<<" b="<<b<<endl;
}
int main()
{
    Complex c1,c2,c3,c4;
    c1.setData(3,4);
    c2.setData(5,6);
    c3=c1+c2; //c3=operator+(c1,c2);
    c3.showData();
    c4=-c3; //c4=operator-(c3);
    cout<<endl;
    return 0;
}





/*
//Example of making a funtion friend to multiple classes
class A
{
    friend void f1();
};
class B
{
    friend void f1();
};
void f1()
{

}

*/

/*
class Product
{
    private:
        int p1,p2,p3;
        friend void dost(Product &);
    public:
        void show()
        {
            cout<<"p1="<<p1<<" p2="<<p2<<" p3="<<p3<<endl;
        }
};
void dost(Product &obj1)
{
    obj1.p1=10; 
    obj1.p2=20;
    obj1.p3=30;
}
int main()
{
    Product obj;
    dost(obj);
    obj.show();
    cout<<endl;
    return 0;
}
*/