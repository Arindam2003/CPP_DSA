#include <stdio.h>
void sort(int arr[]){
    int m, j, i;
    // m = arr[0];
    int temp;
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];					
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[10], i, x;
    printf("Now Enter your Number: ");
    for (i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr);
}
