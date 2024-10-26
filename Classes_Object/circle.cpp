#include<iostream>
using namespace std;

class Circle{
    private:
        int r;
    public:
        void setRad(int x)
        {
            r=x;
        }
        int getArea()
        {
            return 3.14*r*r;
        }
        int getCircum()
        {
            return 2*3.14*r;
        }
};

int main()
{
    Circle c;
    c.setRad(3);
    cout<<"Area of circle is:"<<c.getArea()<<endl;
    return 0;
}