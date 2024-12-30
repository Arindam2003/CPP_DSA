#include <stdio.h>
int main(){
	int i,j,num1,num2;
	
	printf ("Enter a Starting Number: ");
	scanf ("%d", &num1);
	
	printf ("Enter a Ending Number: ");
	scanf ("%d", &num2);
	
	for (i=num1; i<=num2; i++){
		
		int count = 0;
		
		for (j=2; j<= i/2; j++){
			
			if (i % j == 0){
				count++;
				break;
			}
		}
		if (count == 0 && i!=1){
			printf ("%d ",i);
		}
	}
	return 0;
	
}
