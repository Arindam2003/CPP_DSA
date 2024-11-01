#include<iostream>
using namespace std;

class Time{
    private:
        int hr,min,sec;
    public:
        void setValue(int ,int ,int);
        void showValue();
        void normalize();
};

void Time::setValue(int h,int m,int s)
{
    hr=h;
    min=m;
    sec=s;
}

void Time::showValue()
{
    cout<<hr<<" : "<<min<<" : "<<sec<<endl;
}

void Time::normalize()
{
    if(sec>60)
    {
        sec=sec-60;
        min=min+1;
    }
    if(min>60)
    {
        min=min-60;
        hr=hr+1;
    }
}

int main()
{
    Time t;
    t.setValue(2,70,87);
    t.showValue();
    t.normalize();
    t.showValue();
    return 0;
}