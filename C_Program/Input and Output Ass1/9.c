#include<stdio.h>
int main(){
    int r;
    float a;
    printf("Enter radius of circle: ");
    scanf("%d",&r);
    a=3.414*r*r;
    printf("Area is %f",a);
    return 0;
}