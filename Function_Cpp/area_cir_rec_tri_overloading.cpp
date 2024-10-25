#include<iostream>
#include<math.h>
using namespace std;

float area(int r)
{
    return 3.14*r*r;
}
int area(int l,int b)
{
    return l*b;
}
float area(int a,int b,int c)
{
    float s,ar;
    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    return ar;
}

int main()
{
    cout<<area(2,3);
    return 0;
}