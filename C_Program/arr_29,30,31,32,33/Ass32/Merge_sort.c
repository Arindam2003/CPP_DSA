#include <stdio.h>

void sort(int arr[], int size)
{
    int round, j;
    int temp;
    for (round = 0; round < size - 1; round++)
    {
        for (j = 0; j < size - round - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            { // Swap for descending order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void merge(int arr1[], int arr2[], int size, int new[])
{
    int i, j, k;
    i = j = k = 0;

    // Merge both arrays
    while (i < size && j < size)
    {
        if (arr1[i] > arr2[j])
        {
            new[k++] = arr1[i++];
        }
        else
        {
            new[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1, if any
    while (i < size)
    {
        new[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2, if any
    while (j < size)
    {
        new[k++] = arr2[j++];
    }
}

int main()
{
    int x;
    int i;
    printf("Enter array size: ");
    scanf("%d", &x);
    int arr1[x], arr2[x];
    printf("Enter first array elements: ");
    for (i = 0; i < x; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter second array elements: ");
    for (i = 0; i < x; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int p = 2 * x;
    int new[p];

    // Sort the individual arrays
    sort(arr1, x);
    sort(arr2, x);

    // Merge the sorted arrays
    merge(arr1, arr2, x, new);

    printf("Result is: ");
    for (i = 0; i < p; i++)
    {
        printf("%d ", new[i]);
    }

    return 0;
}
