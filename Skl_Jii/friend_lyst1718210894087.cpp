#include<iostream>
using namespace std;

class Complex
{
    private:
        int a,b;     
    public:        
        void setData(int,int);
        void showData();  
        Complex sumGreater(Complex C)
        {
            if((a+b) > (C.a+C.b))
                return *this;
            else
                return C;
        } 
        friend Complex operator+(Complex,Complex);   
        friend Complex operator-(Complex);   
        Complex operator+(int);
        friend Complex operator+(int,Complex);
        friend ostream& operator<<(ostream&,Complex);
        firend istream& operator>>(istream&,Complex&);
};
istream& operator>>(istream &din, Complex &X)
{
    din>>X.a>>X.b;
    return din;
}
ostream& operator<<(ostream &dout,Complex X)
{
    dout<<"a="<<X.a<<" b="<<X.b;
    return dout;
}
Complex operator+(int k,Complex X)
{
    Complex temp;
    temp.a=k+X.a;
    temp.b=X.b;
    return temp;
}
Complex Complex::operator+(int k)
{
    Complex temp;
    temp.a=a+k;
    temp.b=b;
    return temp;
}
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
void Complex:: setData(int a,int b) 
{
    this->a=a;
    this->b=b;
}
void Complex::showData()
{
    cout<<"a="<<a<<" b="<<b<<endl;
}
int main()
{
    Complex c1,c2,c3,c4,c5,c6;
    cout<<"Enter a complex number (real and imag part):";
    cin>>c1;
    c2.setData(5,6);
    c3=c1+c2; //c3=operator+(c1,c2);
    c3.showData();
    c4=-c3; //c4=operator-(c3);
    c4.showData();
    cout<<endl;
    c5=c1+5; //c5=c1.operator+(5);
    c5.showData();
    c6=5+c1; //c6=operator+(5,c1);
    cout<<c6; //operator<<(cout,c6);

    c3=c1.sumGreater(c2);
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