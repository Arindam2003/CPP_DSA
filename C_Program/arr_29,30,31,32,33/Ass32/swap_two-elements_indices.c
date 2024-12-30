#include <stdio.h>

void swap(int arr[], int i, int j)
{
    int k;
    int temp = arr[i-1];
    arr[i-1] = arr[j];
    arr[j-1] = temp;
    printf("After Swaping the arr is \n");
    for (k = 0; k < 5; k++)
    {
        printf("%d ", arr[k]);
    }
}
int main()
{
    int arr[5], i;
    int x, y;
    printf("Enter 5 Number: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Select low value from left side: ");
    scanf("%d", &x);
    printf("Select high value from left side: ");
    scanf("%d", &y);
    swap(arr, x, y);
    return 0;
}