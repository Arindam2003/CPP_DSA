#include <stdio.h>
int min(int A[], int size)
{
    int m, i;
    m = A[0];
    for (i = 1; i < size; i++)
    {
        if (m > A[i])
        {
            m = A[i];
        }
    }
    return m;
}
int main()
{
    int i, x;
    printf("Enter the size of an array: ");
    scanf("%d", &x);
    printf("Now Enter your Number: ");
    int arr[x];
    for (i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Smallest number is : %d", min(arr, x));
}