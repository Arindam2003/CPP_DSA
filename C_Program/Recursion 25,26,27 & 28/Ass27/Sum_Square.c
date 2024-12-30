#include<stdio.h>
int square(int);
int main(){
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    printf("Sum of square is %d",square(num));
    return 0;
}
int square(int n){
    if(n==1){
        return 1;
    }
    return n*n+square(n-1);

}