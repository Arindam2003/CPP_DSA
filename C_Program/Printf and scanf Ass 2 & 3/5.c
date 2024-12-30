#include<stdio.h>
int main(){
    int a,b,x,z;
    printf("Enter Cost price of one dozen: ");
    scanf("%d",&a);
    printf("Enter selling price of one dozen: ");
    scanf("%d",&b);

    x=(b-a)/12;
    z=x*25;

    if(x<0){
        printf("Loss of 25 Bananas is %d",z);
    }
    if(x>0){
        printf("Profit of 25 Bananas is %d",z);
    }
    getch();
}