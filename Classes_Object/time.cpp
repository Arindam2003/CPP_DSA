#include<iostream>
using namespace std;

class Time{
    private:
        int hr,min,sec;
    public:
        void setTime(int x,int y,int z)
        {
            hr=x;
            min=y;
            sec=z;
        }
        void display()
        {
            cout<<hr<<":"<<min<<":"<<sec;
        }
};

int main()
{
    Time t;
    t.setTime(3,23,10);
    t.display();
    return 0;
}