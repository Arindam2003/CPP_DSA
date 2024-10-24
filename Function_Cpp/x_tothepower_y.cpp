#include<iostream>
using namespace std;

int main()
{
    int i,x,y;
    cout<<"Enter x:";
    cin>>x;
    cout<<"Enter y:";
    cin>>y;
    int ans=1;
    for(i=0;i<y;i++)
    {
        ans=ans*x;
    }
    cout<<"Answer is:"<<ans;
    return 0;
}