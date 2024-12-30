#include <stdio.h>
void sort(int *ptr, int size)
{
    int i,j, temp;
    for (i = 0; i < size; i++)
    {   for(j=0;j<size;j++){
            if (ptr[i] > ptr[j])
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
    for(i=0;i<size;i++){
        printf("%d ",ptr[i]);
    }
}
int main()
{
    int x;
    printf("Enter Size of an array: ");
    scanf("%d",&x);
    int i,arr[x];
    printf("Enter number in an array: ");
    for(i=0;i<x;i++){
        scanf("%d ",&arr[i]);
    }
    sort(arr,x);
    return 0;
}