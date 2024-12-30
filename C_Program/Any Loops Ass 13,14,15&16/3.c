#include<stdio.h>
int main(){
	int s=0,x,i;
	printf("Enter a number:");
	scanf("%d",&x);
	for(i=0;i<2*x;i++){
		if(i%2!=0){
			s=s+i;
		}
	}
	printf("Sum of first %d odd number is %d",x,s);
}
