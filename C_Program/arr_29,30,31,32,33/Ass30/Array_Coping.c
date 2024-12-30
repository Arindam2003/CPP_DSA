#include <stdio.h>
int main()
{
    int arr1[10], i, j,arr2[10];
    printf("Enter 10 Number: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for(j=0;j<10;j++){
        arr2[j]=arr1[j];
    }
    printf("Array2 element is: ");
    for(i=0;i<10;i++){
        printf("%d ",arr2[i]);
    }
}