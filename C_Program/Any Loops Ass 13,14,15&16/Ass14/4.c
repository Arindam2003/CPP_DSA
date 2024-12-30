/*
#include <stdio.h>
int main(){
	int num1,num2,i,j,result;
	printf("Enter 1st Number:");
	scanf("%d",&num1);
	printf("Enter 2nd Number:");
	scanf("%d",&num2);
	int arr[10];
	int store = 0;
	int k=0;
//	int max = num1>num2?num1:num2;
	
	for (i=1;i<=num1*num2;i++){
		for(j=j;j<=10;j++)
		{
			arr[k] = num1*j;
			k++;
		}
		for (i=0 ;i<10;i++){
			if(arr[i] % num2 ==0){
				store = arr[i];
				break;
			}
		}
		j=j*num1;
		k=0;
	}
	printf("\n%d",store);
	return 0;
}
*/

#include <stdio.h>

int main() {
    int num1, num2, i, j;
    printf("Enter 1st Number:");
    scanf("%d", &num1);
    printf("Enter 2nd Number:");
    scanf("%d", &num2);
    int arr[10];
    int store = 0;
    int k = 0;

    for (i = 1; i <= num1 * num2; i++) {
        for (j = j; j <= 10; j++) {
            arr[k] = num1 * j;
            k++;
        }
        for (i = 0; i < 10; i++) {
            if (arr[i] % num2 == 0) {
//                store = arr[i];
                printf("\n%d", arr[i]);
                return 0;
            }
        }
        j = j * num1;
        k = 0;
    }
    
    return 0;
}

