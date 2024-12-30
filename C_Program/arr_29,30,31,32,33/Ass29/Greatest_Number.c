#include<stdio.h>
int main(){
    int arr[10],i;
    printf("Enter 10 numbers");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int grt=arr[0];
    for(i=1;i<10;i++){
        if(grt<arr[i]){
            grt=arr[i];
        }
    }
    printf("Greater Element is %d",grt);
    return 0;
}