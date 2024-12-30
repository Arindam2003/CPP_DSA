#include<stdio.h>
int main(){
    int arr[10],i;
    printf("Enter 10 numbers");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int sml=arr[0];
    for(i=1;i<10;i++){
        if(sml>arr[i]){
            sml=arr[i];
        }
    }
    printf("Smaller Element is %d",sml);
    return 0;
}