#include<stdio.h>
int main(){
    int x,i,count=0;
    printf("Enter a number:");
    scanf("%d",&x);
    
    for (i=2; i<x; i++){
        if(x%i==0){
            count++;
        }
    }
    printf("Number %d\n",count);
    if(count==0){
    	printf("Prime");
	}
	else{
		printf("Not Prime");
	}
    getch();
}
