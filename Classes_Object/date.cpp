#include<iostream>
using namespace std;

class Date
{
    private:
        int day,month,year;
    public:
        void setDate(int x,int y,int z)
        {
            day=x;
            month=y;
            year=z;
        }
        void getDate()
        {
            cout<<"day="<<day<<" month="<<month<<" year="<<year<<endl;
        }
        void getDash()
        {
            cout<<day<<"-"<<month<<"-"<<year<<endl;
        }
};

int main()
{
    Date d;
    d.setDate(31,12,2022);
    d.getDate();
    d.getDash();
    return 0;
}
