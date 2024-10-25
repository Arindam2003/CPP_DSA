#include<iostream>
using namespace std;

void swap(int &p,int &q)
{
    int temp=p;
    p=q;
    q=temp;
}

int main()
{
    int a=5;
    int b=4;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<a<<" "<<b;
}