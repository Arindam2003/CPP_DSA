#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()

{
    int *arr,i,n,s=0;
    printf("Hiow many value you want:");
    scanf("%d",&n);
    arr=(int*)malloc(sizeof(int)*n);
    printf("Enter %d values:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    for(i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    printf("Sum is %d",s);
    free(arr);
    return 0;
}