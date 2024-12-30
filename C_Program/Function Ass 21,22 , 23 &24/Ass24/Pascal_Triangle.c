#include<stdio.h>
int main(){
    int i,j;
    int flag;
    for(i=1;i<=lines;i++){
        for(j=1,flag=1;j<=2*lines-1;j++){
            if(j>=lines+1-i&&j<=lines-1+i){
                if(flag){
                    printf("*");
                }
                else{
                    printf(" ");
                }
                flag=1-flag;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
}