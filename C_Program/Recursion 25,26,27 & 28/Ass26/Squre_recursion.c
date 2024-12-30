#include<stdio.h>
void printN(int);
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printN(num);
    return 0;
}

void printN(int x){
    if(x>0){
        printN(x-1);
        printf("%d ",x*x);
    }
}
