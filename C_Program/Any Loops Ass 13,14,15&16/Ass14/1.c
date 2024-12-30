#include<stdio.h>
int main(){
    int s=1,x,i;
    printf("Enter a number:");
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        s=s*i;
    }
    printf("%d",s);
    return 0;
}