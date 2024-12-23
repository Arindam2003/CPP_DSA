#include<iostream>
using namespace std;

class Date
{
private:
    int d,m,y;
public:
    //! With Argument
    Date(int d,int m,int y):d(d),m(m),y(y){}
    //! Without Argument
    Date():d(1),m(2),y(2024)
    {}
};
