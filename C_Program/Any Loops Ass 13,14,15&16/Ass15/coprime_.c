#include<stdio.h>
int main(){
    int a,b,h;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);

    for(h=a<b?a:b;h>=1;h--){
        if(a%h==0 && b%h==0){
            break;
        }
    }
    printf("%d\n",h);
    if(h==1){
        printf("Two Number is co_prime");
    }
    else{
        printf("These Two Number Not co_prime ");
    }
}