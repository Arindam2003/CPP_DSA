#include <stdio.h>
void frequency(int arr[], int size);
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

void frequency(int arr[], int size)
{
    sort(arr, size);
    int i;
    int count = 0;
    for (i = 0; i < size - 1;)
    {
        if (arr[i] == arr[i + 1])
        {
            int j = i;
            while (arr[j] == arr[i])
            {
                count++;
                i++;
            }
            printf("%d exist %d Times\n", arr[i], count);
        }
        else
        {
            printf("%d exist 1 Time\n", arr[i]);
            i++;
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
    frequency(arr, x);
}
