#include<iostream>
using namespace std;
int fact(int x)
{
    int f=1;
    while(x)
    {
        f=f*x;
        x--;
    }
    return f;
}

int combi(int n,int r)
{
    int x=fact(n)/(fact(r)*fact(n-r));
    return x;
}

int main()
{
    int 
}