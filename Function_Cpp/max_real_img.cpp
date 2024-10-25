#include<iostream>
using namespace std;

int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
double max(double a,double b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    cout<<max(3,4);
    return 0;
}