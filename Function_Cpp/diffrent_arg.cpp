#include<iostream>
using namespace std;

int sum(int a,int b)
{
    return a+b;
}

int sum(int a,int b,int c)
{
    return a+b+c;
}

int main()
{
    int a=4,b=2;
    cout<<(sum(a,b));
    return 0;
}