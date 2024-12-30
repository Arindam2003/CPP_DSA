#include<stdio.h>
int main(){
    int arr[10],i;
    printf("Enter 10 Number: ");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int evensum=0;
    for(i=0;i<10;i++){
        if(arr[i]%2==0){
            evensum=evensum+arr[i];
        }
    }
    printf("Even sum is %d\n",evensum);
    int oddsum=0;
    for(i=0;i<10;i++){
        if(arr[i]%2!=0){
            oddsum=oddsum+arr[i];
        }
    }
    printf("Odd sum is %d",oddsum);
}