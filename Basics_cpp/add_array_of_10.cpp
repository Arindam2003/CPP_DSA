#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    int i;
    cout<<"Enter 10 elements";
    for (i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(i=0;i<10;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"Sum of all 10 element is : "<<sum;
    return 0;
}