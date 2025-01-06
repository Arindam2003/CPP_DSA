#include <iostream>
using namespace std;

class Time
{
private:
    int hr, min, sec;

public:
    void setTime(int hr, int min, int sec)
    {
        this->hr = hr;
        this->min = min;
        this->sec = sec;
    }
    void showData()
    {
        cout << "hr= " << hr <<"min= "<<min<<"sec= "<<sec<<endl;
    }
    void setHour(int hr)
    {
        this->hr=hr;
    }
    void setMin(int min)
    {
        this->min=min;
    }
    void setSec(int sec)
    {
        this->sec=sec;
    }
    int getHour(){return hr;}
    int getMin(){return min;}
    int getSec(){return sec;}
    bool operator<(Time);
    void sortTime(Time t[],int n);
    void display(Time [],int);
};

bool Time::operator< (Time t)
{
    if(hr<t.hr)
    {
        return true;
    }
    if(hr>t.hr)
    {
        return false;
    }
    if(min<t.min)
    {
        return true;
    }
    if(min>t.min)
    {
        return false;
    }
    if(sec<t.sec)
    {
        return true;
    }
    if(sec>t.sec)
    {
        return false;
    }
}

void Time::sortTime(Time t[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(t[j]<t[j+1])
            {
                Time temp=t[j];
                t[j]=t[j+1];
                t[j+1]=t[j];
            }
        }
    }
}

Time* getTimeArray(int size)
{
    Time *ptr;
    ptr=new Time[size];
    return ptr;
} 

void Time::display(Time t[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        t[i].showData();
    }
}
