#include<iostream>
using namespace std;

int main()
{
    int i;
    int max=0,num;
    cout<<"Enter a number:";
    cin>>num;
    while (num>0)
    {
        int temp=num%10;
        if(temp>max)
        {
            max=temp;
        }
        num=num/10;
    }
    cout<<"Maximum digit is:"<<max;
    return 0;
}