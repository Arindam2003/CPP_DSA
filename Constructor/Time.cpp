#include<iostream>
using namespace std;

class Time {
    private:
        int hr,sec,min;
    public:
        Time()
        {
            hr=0;
            min=0;
            sec=0;
        }
        Time(int h,int m,int s)
        {
            hr=h;
            min=m;
            sec=s;
        }
};