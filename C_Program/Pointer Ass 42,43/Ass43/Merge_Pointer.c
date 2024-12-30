#include<stdio.h>
#include<string.h>
void merge(int *arr1,int size1,int *arr2,int size2,int *arr3)
{
    int i,j;
    for(i=0;i<size1;i++)
    {
        arr3[i]=arr1[i];
    }
    for(j=0;j<size2;j++)
    {
        arr3[size1+j]=arr2[j];
    }
    printf("\nNew Merge Array-");
    for(i=0;i<size1+size2;i++){
        printf("%d ",arr3[i]);
    }
}

int main(){
    int size1;
    printf("Enter Arr1 Size: ");
    scanf("%d",&size1);
    int i;
    int arr1[size1];
    printf("Enter arr1 elements: ");
    for(i=0;i<size1;i++){
        scanf("%d",&arr1[i]);
    }
    int y;
    printf("Enter Arr1 Size: ");
    scanf("%d",&y);
    int arr2[y];
    printf("Enter arr2 elements: ");
    for(i=0;i<y;i++){
        scanf("%d",&arr2[i]);
    }
    int arr3[size1+y];
    merge(arr1,size1,arr2,y,arr3);

}