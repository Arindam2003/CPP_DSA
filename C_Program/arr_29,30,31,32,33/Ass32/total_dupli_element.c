#include <stdio.h>
int count_dupli(int arr[], int size);
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

int count_dupli(int arr[], int size)
{
    sort(arr, size);
    int i, j;
    int count = 0;
    for (i = 0; i < size-1;)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
            for (j=i; arr[j] == arr[i] && arr[i] < size; i++)
                ; // Skip repeating elements
        }
        else{
            i++;
        }
    }
    return count;
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
    printf("Number of Duplicate elements are %d ", count_dupli(arr, x));
}