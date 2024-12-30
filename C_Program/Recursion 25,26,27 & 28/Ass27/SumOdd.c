#include<stdio.h>
int sumodd(int);
int main(){
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    printf("Sum of oddnumber is %d",sumodd(num));
    return 0;
}
int sumodd(int n){
    if(n==1){
        return 1;
    }
    return 2*n-1+sumodd(n-1);

}