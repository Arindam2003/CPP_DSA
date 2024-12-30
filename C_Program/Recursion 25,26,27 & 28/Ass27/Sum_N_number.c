#include<stdio.h>
int main(){
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    printf("Sum is %d",sum(num));
    return 0;
}
int sum(int n){
    if(n==1){
        return 1;
    }
    return n+sum(n-1);

}