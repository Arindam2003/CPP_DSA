#include<stdio.h>
// void unique(int ,int);
void sort(int arr[], int size)
{
    int round, j;
    int temp;
    for (round = 0; round < size - 1; round++)
    {
        for (j = 0; j < size - round - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            { // Swap for ascending order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void unique (int arr[],int size ){
    int i,j;
    sort(arr,size);
    for(i=0;i<size-1;){
        if(arr[i]!=arr[i+1]){
            printf("%d ",arr[i]);
            i++;
        }
        else{
            for (j=i; arr[j] == arr[i]; i++);
        }
    }
}
int main()
{
    int x;
    printf("Enter array size: ");
    scanf("%d", &x);
    int arr[x];
    printf("Enter array number: ");
    int i;
    for (i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Result is: ");
    unique(arr, x);
}