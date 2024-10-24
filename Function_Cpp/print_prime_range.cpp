#include<iostream>
using namespace std;

int prime(int x)
{
    int i;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            return 0; //! Not Prime
        }
    }
    return 1; //! Prime
}

int main()
{
    int i,st,end;
    cout<<"Enter starting:";
    cin>>st;
    cout<<"Enter Ending:";
    cin>>end;
    for(i=st;i<=end;i++)
    {
        if(prime(i)==1)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}