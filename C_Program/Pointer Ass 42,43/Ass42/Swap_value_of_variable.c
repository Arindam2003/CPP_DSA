#include<stdio.h>
void swap(int *x,int *y)
{
    int a;
    a=*x;
    *x=*y;
    *y=a;
}
int main(){
    int a,b;
    printf("Enter Two Number: ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);
}