#include<stdio.h>
int main(){
	int x;
	
	printf("Enter a number: ");
	scanf("%d",&x);
	int i=x;
	while(i>=1){
		printf("%d ",i);
		i--;	
	}
	return 0;
}
