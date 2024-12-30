#include<stdio.h>
int main(){
	int s=0,a,i;
	printf("Enter a number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		s=s+(i*i);
	}
	printf("Sum is %d",s);
}