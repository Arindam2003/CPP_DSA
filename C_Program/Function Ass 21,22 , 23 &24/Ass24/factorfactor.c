#include<stdio.h>
int div(int);
int factor(int);
int main(){
    int i,num;
    int sum=1;
    printf("Enter number : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        sum=sum+div(i);
    }
    printf("%d ",sum);
}
int div(int x){
    int ss=factor(x)/x;
    return ss;
}

int factor(int x){
    int s=1;
    while(x>0){
        s=s*x;
        x--;
    }
    return s;
}