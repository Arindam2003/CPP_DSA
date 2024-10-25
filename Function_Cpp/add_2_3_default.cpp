#include<iostream>
using namespace std;

int sum(int a,int b,int c=0)
{
    int x= a+b+c;
    return x;
}

int main()
{
    int x=sum(4,5);
    cout<<"Sum of two is:"<<x<<endl;
    int y=sum(4,1,1);
    cout<<"Sum of three is:"<<y;
    return 0;
}