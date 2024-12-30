#include<stdio.h>
void fibo(int);
int main(){
    int x;
    printf("Enter Number: ");
    scanf("%d",&x);
    fibo(x);
}

void fibo(int x){
    int i=1;
    int j=-1,k=1;
    int sum=0;
    while(i<=x){
        sum=j+k;
        printf("%d ",sum);
        j=k;
        k=sum;
        i++;
    }
}