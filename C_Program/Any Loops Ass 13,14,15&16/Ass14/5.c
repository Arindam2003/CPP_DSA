/*
#include <stdio.h>
#include <math.h>

int main(){
	int num,i,p,result=0;
	printf("Enter a number : ");
	scanf("%d", &num);
	
	int count=0;
	
	while(num % 10 != 0){
		num = num/10;
		count++;
	}
	printf("%d",count);
	
	for (i = pow(10,(count-1)); i >= 1; i= pow(10,(count=count -1))){
		
		p = num %10;
		result = result + p*i;
		num = num/10;
	}
	printf("\nResult is %d",result);
}
*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, i, p, result = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
	int orgn = num;
    int count = 0;

    while (num % 10 != 0) {
        num = num / 10;
        count++;
    }
    printf("%d", count);

    for (i = pow(10, (count = count - 1)); i > 0; i = pow(10, (count = count - 1))) {

        p = orgn % 10;
        result = result + p * i;
        orgn = orgn / 10;
    }
    printf("\nResult is %d", result);
    return 0;
}

