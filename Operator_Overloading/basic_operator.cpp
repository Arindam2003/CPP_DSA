#include<iostream>
using namespace std;

class Complex{
    private:
        int a,b;
    public:
        void setData(int, int);
        void showData();
        Complex operator+(Complex);
        Complex operator-(Complex);
        Complex operator*(Complex);
        bool operator==(Complex);
};

Complex Complex::operator+(Complex c)
{
    Complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;
}
Complex Complex::operator-(Complex c)
{
    Complex temp;
    temp.a=a-c.a;
    temp.b=b-c.b;
    return temp;
}
Complex Complex::operator*(Complex c)
{
    Complex temp;
    temp.a=a*c.a;
    temp.b=b*c.b;
    return temp;
}
bool Complex::operator==(Complex c)
{
    if(a==c.a && b==c.b){
        return true;
    }
    else{
        return false;
    }
}

void Complex::setData(int x,int y)
{
    a=x;
    b=y;
}
void Complex::showData()
{
    cout <<a<<" "<<b;
}


int main()
{
    Complex c1,c2,c3;
    c1.setData(2,4);
    c2.setData(2,2);
    //c3=c1+c2;  //c3=c1.add(c2) ...same 2things this is operator overloading...
    //c3.showData();
    // int x=3+2;
    // cout<<endl<<x;
    cout<<"equal?" <<(c1==c2)<<endl;  //c1.equal(c2);
    
}