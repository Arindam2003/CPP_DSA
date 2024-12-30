#include<stdio.h>
int main(){
    int x,y,z,a;
    x = sizeof(int);
    y = sizeof(float);
    z = sizeof(char);
    a = sizeof(double);
    printf("size of integer is %d\n",x);
    printf("size of float is %d\n",y);
    printf("size of char is %d\n",z);
    printf("size of double is %d",a);
}