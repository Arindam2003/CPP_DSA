#include<stdio.h>
int main(){
	int i=1,x;
	printf("Enter a number:");
	scanf("%d",&x);
	while (i<=x){
		if(i%2==0){
		printf("%d ",i);
	}
	i++;
	}
}
