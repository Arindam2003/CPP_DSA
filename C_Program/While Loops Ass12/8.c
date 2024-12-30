#include<stdio.h>
int main(){
	int x,s;
	printf("Enter a number:");
	scanf("%d",&x);
	
	int i=1;
	
	while(i<=x){
		s=i*i;
		printf("%d ",s);
		i++;
	}
}
