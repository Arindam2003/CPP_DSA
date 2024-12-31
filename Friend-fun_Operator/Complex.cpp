#include<iostream>
using namespace std;

class Complex{
    private:
        int a,b;
    public:
        void setData(int x,int y)
        {
            a=x;
            y=b;
        }
        void showData()
        {
            cout<<"x="<<a<<endl<<"y="<<b<<endl;
        }
        friend Complex operator+(Complex,Complex);
        friend Complex operator-(Complex,Complex);
        friend Complex operator*(Complex,Complex);
        friend Complex operator-(Complex); //! Unary operator
};

Complex operator-(Complex x)  //! Unary Frien Function
{
    Complex temp;
    temp.a=-x.a;
    temp.b=-x.b;
    return temp;
}

Complex operator+(Complex x,Complex y)  //! Friend function
{
    Complex temp;
    temp.a=x.a+y.a;
    temp.b=x.b+y.b;
    return temp;
}
Complex operator-(Complex x,Complex y)  //! Friend function
{
    Complex temp;
    temp.a=x.a-y.a;
    temp.b=x.b-y.b;
    return temp;
}
Complex operator*(Complex x,Complex y)  //! Friend function
{
    Complex temp;
    temp.a=x.a*y.a;
    temp.b=x.b*y.b;
    return temp;
}
