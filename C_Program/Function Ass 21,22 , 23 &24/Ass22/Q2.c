#include<stdio.h>
int main(){
    int n,r;
    printf("Enter n for number of selected and \n enter r for select from n::");
    scanf("%d %d",&n,&r);
    printf("REsult is %d",combi(n,r));
}

int fact(int n){
    int f=1;
    while(n){
        f=f*n;
        n--;
    }
    return f;
}
int combi(int n,int r){
    return fact(n)/fact(n-r)/fact (r);
}