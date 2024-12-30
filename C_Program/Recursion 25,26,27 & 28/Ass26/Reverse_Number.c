#include<stdio.h>
void rev(int);
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    rev(num);
}
void rev(int x){
    if(x>0){
        printf("%d",x%10);
        rev(x/10);
    }
}