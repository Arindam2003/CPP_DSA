#include <stdio.h>
void rotate(int arr[], int size, int n, int d)
{
    int i, j;
    if (d == 1) //right rotatte
    {
        for (j = 1; j <= n; j++)
        {
            int x = arr[size - 1];
            for (i=size-1; i >0; i--)
            {
                arr[i] = arr[i-1];
            }
            arr[0] = x;
        }
    }
    else if (d == 2) //left rotate
    {
        for (j = 1; j <= n; j++)
        {
            int x = arr[0];
            for (i = 0; i < size; i++)
            {
                arr[i] = arr[i + 1];
            }
            arr[size - 1] = x;
        }
    }
    printf("New array after rotate: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int x;
    
    int i;
    int n, d;
    printf("Enter size: ");
    scanf("%d", &x);
    int arr[x];
    printf("Enter array: ");
    for (i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of rotate: ");
    scanf("%d", &n);
    printf("Enterr direction: ");
    scanf("%d", &d);
    rotate(arr, x, n, d);
}
