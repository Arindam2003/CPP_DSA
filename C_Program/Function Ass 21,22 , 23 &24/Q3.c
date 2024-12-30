#include<stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("%d",check(x));

}
int check(int a){
    if(a%2==0){
        return 1;
    }
    else{
        return 0;
    }
}