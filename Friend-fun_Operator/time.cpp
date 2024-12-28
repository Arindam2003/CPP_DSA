#include <iostream>
using namespace std;

class Time
{
private:
    int hr, min, sec;

public:
    void setData(int hour, int mini, int seco)
    {
        hr = hour;
        min = mini;
        sec = seco;
    }
    void showData()
    {
        cout << hr << ":" << min << ":" << sec << endl;
    }
    bool operator>(Time data)
    {
        if (hr > data.hr)
        {
            return true;
        }
        else if (hr == data.hr)
        {
            if (min > data.min)
            {
                return true;
            }
            else if (min == data.min)
            {
                if (sec > data.sec)
                {
                    return true;
                }
                else if (sec == data.sec)
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        return false;
    }


    Time operator++() // pre increment
    {
        Time temp;
        temp.sec++;
        temp.min=temp.min+temp.sec/60;
        temp.sec=temp.sec%60;
        temp.hr=temp.hr+temp.min/60;
        temp.min=temp.min%60;
        // return *this;
        return temp;
    }
    Time operator++(int) // post increment
    {
        Time temp=*this;
        sec++;
        min=min+sec/60;
        sec=sec%60;
        hr=hr+min/60;
        min=min%60;
        // return *this;
        return temp;
    }
    Time operator+(Time t)
    {
        Time temp;
        temp.hr=hr+t.hr;
        temp.min=min+t.min;
        temp.sec=sec+t.sec;
        return temp;
    }
};

int main()
{
    Time t1, t2;
    t1.setData(13, 34, 45);
    t2.setData(12, 34, 45);
    cout << (t1 > t2) << endl;
}