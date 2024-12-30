#include<stdio.h>

int adj(int arr[],int size){
    int i;
    int m;
    for(i=0;i<size;i++){
        if (arr[i]==arr[i+1]){
            return arr[i];
        }
    }
    return 1;
    
}

int main(){
    int x;
    printf("Enter size: ");
    scanf("%d",&x);
    int i;
    int arr[x];
    printf("Enter array: ");
    for(i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    int p=adj(arr,x);
    if(p!=1){
        printf("adjusent is - %d",p);
    }
    else {
        printf("No adjusaent ");
    }
    
}