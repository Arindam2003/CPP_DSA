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
    int i,j,n;
    cout<<"Enter Number of Lines:";
    cin>>n;
    int flag;
    for(i=1;i<=n;i++)
    {
        flag=1;
        int r=0;
        for(j=1;j<2*n;j++)
        {
            if(j>=n+1-i&&j<=n-1+i)
            {
                if(flag)
                    cout<<combi((i-1),r++);
                else
                    cout<<" ";
                flag=1-flag;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}