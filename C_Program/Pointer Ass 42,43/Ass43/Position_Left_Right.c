#include <stdio.h>
#include <stdlib.h>

void position(int *inparr, int size)
{
    int *left = (int *)malloc(size * sizeof(int)); // Allocate memory for left
    int *right = (int *)malloc(size * sizeof(int));
    int temp = inparr[0];
    int i, j = -1, k = -1;
    for (i = 1; i < size; i++)
    {
        if (temp > inparr[i])
        {
            j++;
            left[j] = inparr[i];
        }
        else if (temp < inparr[i])
        {
            k++;
            right[k] = inparr[i];
        }
    }
    printf("\nLeft Value is: ");
    for (i = 0; i <= j; i++)
    {
        printf("%d ", left[i]);
    }
    printf("\nRight Value is: ");
    for (i = 0; i <= k; i++)
    {
        printf("%d ", right[i]);
    }
}

int main()
{
    int x;
    printf("Enter Size of an arry: ");
    scanf("%d", &x);
    int arr[x];
    printf("Enter numbers: ");
    int i;
    for (i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    position(arr, x);
    return 0;
}