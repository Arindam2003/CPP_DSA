#include<iostream>
using namespace std;

class Complex
{
    private:
        int real,img;
    public:
        void setvalue(int x,int y)
        {
            real=x;
            img=y;
        }
        void display()
        {
            cout<<real<<" "<<img<<"i";
        }
};

int main()
{
    Complex c;
    c.setvalue(2,3);
    c.display();
    return 0;
}